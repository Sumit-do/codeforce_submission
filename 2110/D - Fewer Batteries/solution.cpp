#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    
    vector<vector<pair<int, long long>>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    
    auto check = [&](long long X) {
        vector<long long> dp(n + 1, -1);
        dp[1] = 0;
        
        for (int u = 1; u <= n; ++u) {
            if (dp[u] == -1) continue;
            
            long long leave = min(X, dp[u] + b[u]);
            for (auto& edge : adj[u]) {
                int v = edge.first;
                long long w = edge.second;
                
                if (leave >= w) {
                    dp[v] = max(dp[v], leave);
                }
            }
        }
        return dp[n] != -1;
    };
    
    long long low = 0, high = 1e9, ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    cout << ans << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}