#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
 
    if (n < 2) {
        cout << 0 << endl;
        return;
    }
 
    ll dp_no = 0; 
    ll dp_yes = -1;
    pair<double, double> range = {0.0, 0.0};
 
    for (int i = 0; i < n - 1; i++) {
        double d = (double)(x[i+1] - x[i]);
        
        ll next_dp_no = dp_no;
        ll next_dp_yes = -1;
        pair<double, double> next_range = {0.0, 0.0};
 
        if (dp_yes != -1) {
            if (range.first < d) {
                next_dp_no = max(next_dp_no, dp_yes);
            }
        }
 
        next_dp_yes = dp_no + 1;
        next_range = {0.0, d};
 
        if (dp_yes != -1) {
            double low = max(0.0, d - range.second);
            double high = d - range.first;
            
            if (low < high) { 
                if (dp_yes + 1 > next_dp_yes) {
                    next_dp_yes = dp_yes + 1;
                    next_range = {low, high};
                }
            }
        }
 
        dp_no = next_dp_no;
        dp_yes = next_dp_yes;
        range = next_range;
    }
 
    cout << max(dp_no, dp_yes) << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}