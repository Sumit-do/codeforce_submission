#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    if (n == 2) {
        cout << max(a[0], -a[1]) << "
";
        return;
    }
 
    vector<ll> pref(n);
    pref[1] = a[0];
    for (int i = 2; i < n; ++i) {
        pref[i] = pref[i - 1] + abs(a[i - 1]);
    }
 
    vector<ll> suff(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        suff[i] = suff[i + 1] + a[i];
    }
 
    ll max_x = -8e18; 
 
    for (int i = 0; i < n; ++i) {
        ll current_x = 0;
        if (i == 0) {
            current_x = -suff[1];
        } else if (i == n - 1) {
            current_x = pref[n - 1];
        } else {
            current_x = pref[i] - suff[i + 1];
        }
        max_x = max(max_x, current_x);
    }
 
    cout << max_x << "
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