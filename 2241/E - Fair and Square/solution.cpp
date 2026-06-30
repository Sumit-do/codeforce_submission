#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void dfs(int u, int p, vector<vector<int>>& adj, vector<ll>& sz) {
    sz[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u, adj, sz);
            sz[u] += sz[v];
        }
    }
}
 
void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    vector<bool> sq(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int r = round(sqrt(a[i]));
        sq[i] = (r * r == a[i]);
    }
    
    vector<vector<int>> adj(n + 1);
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<ll> sz(n + 1);
    dfs(1, 0, adj, sz);
    
    ll squarewf = 0;
    for (int i = 1; i <= n; i++) {
        if (!sq[i]) continue;
        ll w1 = 0, w2 = 0, w3 = 0;
        for (int v : adj[i]) {
            ll s = (sz[v] < sz[i]) ? sz[v] : (n - sz[i]);
            w3 += w2 * s;
            w2 += w1 * s;
            w1 += s;
        }
        squarewf += w2 + w3;
    }
    cout << squarewf << "
";
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}