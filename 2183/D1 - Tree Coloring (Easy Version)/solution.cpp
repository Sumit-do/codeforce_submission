#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n;
    cin >> n;
 
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<int> depth(n + 1, -1);
    vector<int> depth_count(n + 1, 0);
    vector<int> children_count(n + 1, 0);
 
    queue<int> q;
    q.push(1);
    depth[1] = 0;
    depth_count[0]++;
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        for (int v : adj[u]) {
            if (depth[v] == -1) {
                depth[v] = depth[u] + 1;
                depth_count[depth[v]]++;
                children_count[u]++;
                q.push(v);
            }
        }
    }
 
    int max_width = 0;
    for (int c : depth_count) {
        max_width = max(max_width, c);
    }
 
    int max_star = 0;
    for (int i = 1; i <= n; i++) {
        max_star = max(max_star, children_count[i] + 1);
    }
 
    cout << max(max_width, max_star) << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}