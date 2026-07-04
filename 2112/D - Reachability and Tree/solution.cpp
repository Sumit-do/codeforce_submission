#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; 
    cin >> n;
    vector<vector<int>> adj(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    int v = 0;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() == 2) {
            v = i;
            break;
        }
    }
 
    if (v == 0) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
    int x = adj[v][0];
    int y = adj[v][1];
 
    vector<int> assign(n + 1, -1);
    
    auto dfs = [&](auto& self, int node, int parent, int color) -> void {
        assign[node] = color;
        for (int nxt : adj[node]) {
            if (nxt != parent && nxt != v) {
                self(self, nxt, node, 1 - color);
            }
        }
    };
 
    dfs(dfs, x, v, 1);
    dfs(dfs, y, v, 0);
 
    cout << x << " " << v << "
";
    cout << v << " " << y << "
";
 
    for (int i = 1; i <= n; i++) {
        if (i == v) continue;
        
        if (assign[i] == 1) {
            for (int nxt : adj[i]) {
                if (nxt != v) { 
                    cout << i << " " << nxt << "
";
                }
            }
        }
    }
}
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}