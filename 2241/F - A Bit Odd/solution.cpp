#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool ok = true;
        long long zerosSoFar = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '1') {
                if (zerosSoFar & 1) ok = false;
            } else {
                zerosSoFar++;
            }
        }
        long long onesSoFar = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                if (onesSoFar & 1) ok = false;
            } else {
                onesSoFar++;
            }
        }
 
        cout << (ok ? "Bob" : "Alice") << "
";
    }
}