#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    for (int r = 0; r < k; r++) {
        int x = 0;
        for (int i = r; i < n; i += k)
            x ^= (s[i] - '0');
        if (x) {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}