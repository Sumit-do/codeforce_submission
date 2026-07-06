#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        int twice = 0;
        bool ok = false;
 
        for (int i = 0; i < k; i++) {
            long long x;
            cin >> x;
 
            if (x >= 3) ok = true;
            if (x >= 2) twice++;
        }
 
        cout << (ok || twice >= 2 ? "YES" : "NO") << '
';
    }
}