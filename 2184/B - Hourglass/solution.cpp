#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long s, k, m;
    cin >> s >> k >> m;
 
    long long flips = m / k;
    long long sand_after_last_flip;
 
    if (flips % 2 == 0) {
        sand_after_last_flip = s;
    } else {
        sand_after_last_flip = min(s, k);
    }
 
    long long time_passed_since_last_flip = m % k;
    long long ans = max(0LL, sand_after_last_flip - time_passed_since_last_flip);
 
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