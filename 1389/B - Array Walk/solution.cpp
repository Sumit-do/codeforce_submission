#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    int n, k, z;
    cin >> n >> k >> z;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<ll> pre(n);
    vector<ll> mx(n, 0);
    pre[0] = a[0];
    
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
        mx[i] = max(mx[i - 1], (ll)a[i] + a[i - 1]);
    }
 
    ll ans = 0;
    // Iterate c over the exact number of left moves taken
    for (int c = 0; c <= z; c++) {
        
        int pos1 = k - 2 * c;
        if (pos1 >= 0) {
            ans = max(ans, pre[pos1] + c * mx[pos1]);
        }
        int pos2 = k - 2 * c + 1;
        if (c > 0 && pos2 > 0 && pos2 < n) {
            ans = max(ans, pre[pos2] + (c - 1) * mx[pos2] + a[pos2 - 1]);
        }
    }
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}