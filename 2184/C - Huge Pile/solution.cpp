#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
 
    for (int d = 0; d <= 32; ++d) {
        long long divisor = 1LL << d;
        
        long long val_floor = n / divisor;
        long long val_ceil = (n + divisor - 1) / divisor;
 
        if (val_floor == k || val_ceil == k) {
            cout << d << "
";
            return;
        }
 
        if (val_ceil < k) {
            cout << -1 << "
";
            return;
        }
    }
    
    cout << -1 << "
";
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