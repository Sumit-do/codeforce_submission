#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    long long mx = -2e9, mn = 2e9;
    
    for (long long &x : a) {
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
 
    if (mx == 0 && mn == 0) {
        cout << "No
"; return;
    }
 
    sort(a.begin(), a.end());
    deque<long long> dq(a.begin(), a.end());
    long long sum = 0;
    
    cout << "Yes
";
    while (!dq.empty()) {
        if (sum <= 0) {
            cout << dq.back() << " ";
            sum += dq.back();
            dq.pop_back();
        } else {
            cout << dq.front() << " ";
            sum += dq.front();
            dq.pop_front();
        }
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}