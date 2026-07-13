#include<bits/stdc++.h>
using namespace std;
 
int g(int x) {
    if (x == 0) return 0;
    return (31 - __builtin_clz(x)) + __builtin_popcount(x);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    long long ans = 2e18; 
 
    for (int c = 0; c <= 17; c++) {
        long long cur = -1LL * (n - 1) * c;
        
        for (int i = 0; i < n; i++) {
            int M = ((a[i] + (1 << c) - 1) >> c) << c;
            long long best = 2e18;
            
            for (int j = 0; j * (1 << c) <= 40; j++) {
                int tar = M + j * (1 << c);
                long long cost = (tar - a[i]) + g(tar);
                best = min(best, cost);
            }
            cur += best;
        }
        ans = min(ans, cur);
    }
    
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}