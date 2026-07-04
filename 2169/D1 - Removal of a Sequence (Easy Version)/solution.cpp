#include <iostream>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
/**
 * Simulates the position of a value after x operations.
 * O(x) complexity, but optimized to break early if val < y.
 */
ll get_pos(ll val, ll x, ll y) {
    if (y == 1) return 0; // Everything is removed if y is 1
    for (int i = 0; i < x; i++) {
        if (val < y) break; // Optimization: e / y will be 0 from here on
        val -= (val / y);
    }
    return val;
}
 
void solve() {
    ll x, y, k;
    if (!(cin >> x >> y >> k)) return;
 
    // Edge case: If y is 1, all numbers are removed at every step
    if (y == 1) {
        cout << -1 << "
";
        return;
    }
 
    // Binary search for the smallest original index that ends up at position >= k
    ll low = 1, high = 1e12; // Sequence is limited to 10^12
    ll ans = -1;
 
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll final_pos = get_pos(mid, x, y);
 
        if (final_pos >= k) {
            if (final_pos == k) {
                ans = mid; // Potential answer, but keep looking left for the minimum
            }
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
 
    cout << ans << "
";
}
 
int main() {
    // Faster I/O is essential for 10^5 iterations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}