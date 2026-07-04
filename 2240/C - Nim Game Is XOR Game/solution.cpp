#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long X = 0;
    int positive_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        X ^= a[i];
        if (a[i] > 0) positive_count++;
    }
    
    if (positive_count <= 1) {
        cout << 0 << "
";
        return;
    }
    
    long long win_moves = 0;
    
    if (X == 0) {
        win_moves++;
    }
    
    for (int i = 0; i < n; i++) {
        if ((X ^ a[i]) < a[i]) {
            win_moves++;
        }
    }
    
    cout << win_moves % 998244353 << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}