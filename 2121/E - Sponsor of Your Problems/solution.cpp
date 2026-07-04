#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
string L, R;
int memo[12][2][2];
 
int dp(int idx, bool tightL, bool tightR) {
    if (idx == L.size()) return 0;
    if (memo[idx][tightL][tightR] != -1) return memo[idx][tightL][tightR];
 
    int min_d = tightL ? (L[idx] - '0') : 0;
    int max_d = tightR ? (R[idx] - '0') : 9;
    int ans = 1e9;
 
    for (int d = min_d; d <= max_d; ++d) {
        int current_cost = (d == (L[idx] - '0')) + (d == (R[idx] - '0'));
        bool next_tightL = tightL && (d == min_d);
        bool next_tightR = tightR && (d == max_d);
        ans = min(ans, current_cost + dp(idx + 1, next_tightL, next_tightR));
    }
    
    return memo[idx][tightL][tightR] = ans;
}
 
void solve() {
    cin >> L >> R;
    memset(memo, -1, sizeof(memo));
    cout << dp(0, true, true) << "
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