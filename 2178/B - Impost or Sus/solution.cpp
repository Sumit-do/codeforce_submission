#include <iostream>
#include <string>
#include <vector>
#include <cassert>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    string r;
    cin >> r;
    int n = r.length();
 
    for (char c : r) {
        assert(c == 's' || c == 'u');
    }
 
    int first_s = -1, last_s = -1;
    for (int i = 0; i < n; i++) {
        if (r[i] == 's') {
            if (first_s == -1) first_s = i;
            last_s = i;
        }
    }
 
    if (first_s == -1) {
        cout << 2 + (n - 2) / 2 << endl;
        return;
    }
 
    ll ans = 0;
 
    if (first_s > 0) {
        ans += 1 + (first_s - 1) / 2;
    }
 
    if (last_s < n - 1) {
        int k_suffix = n - 1 - last_s;
        ans += 1 + (k_suffix - 1) / 2;
    }
 
    int count_u = 0;
    for (int i = first_s; i <= last_s; i++) {
        if (r[i] == 'u') {
            count_u++;
        } else {
            ans += count_u / 2;
            count_u = 0;
        }
    }
 
    cout << ans << endl;
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