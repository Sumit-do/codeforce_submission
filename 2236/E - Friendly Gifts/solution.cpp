#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
const int N = 6005;
 
int min_r[N]; 
int max_l[N];
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vector<int>> min_end(n + 1, vector<int>(n + 2, INF));
    vector<vector<int>> max_start(n + 1, vector<int>(n + 2, -1));
 
    vector<int> vis(n + 1, 0);
    int id = 0;
 
    for (int i = 0; i < n; i++) {
        id++;
        int mn = a[i], mx = a[i];
 
        for (int j = i; j < n; j++) {
            if (vis[a[j]] == id) break; 
            vis[a[j]] = id;
 
            mn = min(mn, a[j]);
            mx = max(mx, a[j]);
            int len = j - i + 1;
 
            if (mx - mn == len - 1 && mn + len - 1 <= n) {
                min_end[len][mn] = min(min_end[len][mn], j);   
                max_start[len][mn] = max(max_start[len][mn], i); 
            }
        }
    }
 
    int ans = 0;
    for (int len = n / 2; len >= 1; len--) {
        if (len <= ans) break;
        for (int mn = 1; mn + 2 * len - 1 <= n; mn++) {
            if (max_start[len][mn] == -1) continue;
            int nxt = mn + len;
            if (nxt + len - 1 > n) continue;
            if (max_start[len][nxt] == -1) continue;
            bool ok = (min_end[len][mn] < max_start[len][nxt]) ||
                      (min_end[len][nxt] < max_start[len][mn]);
            if (ok) {
                ans = len;
                break; 
            }
        }
        if (ans == len) break; 
    }
 
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}