#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    vector<int> unique_vals;
    int count = 1;
    
    for (int i = 1; i <= n; i++) {
        if (i < n && a[i] == a[i-1]) {
            count++;
        } else {
            if (count % 2 == 0) {
                cout << "YES
";
                return;
            }
            unique_vals.push_back(a[i-1]);
            count = 1;
        }
    }
    
    for (size_t i = 1; i < unique_vals.size(); i++) {
        if (unique_vals[i] - unique_vals[i-1] <= k) {
            cout << "YES
";
            return;
        }
    }
    
    cout << "NO
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}