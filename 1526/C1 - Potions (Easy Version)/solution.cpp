#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    // dp[j] = maximum health possible after drinking exactly j potions
    // Initialize with -1 to signify that drinking 'j' potions is not yet possible
    vector<ll> dp(n + 1, -1);
    
    dp[0] = 0; // Base case: 0 potions, 0 health
 
    for (int i = 0; i < n; i++) {
        // Iterate backwards to ensure we use each potion only once per state
        for (int j = i; j >= 0; j--) {
            if (dp[j] != -1 && dp[j] + a[i] >= 0) {
                dp[j + 1] = max(dp[j + 1], dp[j] + a[i]);
            }
        }
    }
 
    // Find the largest j where dp[j] is not -1
    for (int j = n; j >= 0; j--) {
        if (dp[j] >= 0) {
            cout << j << endl;
            return;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}