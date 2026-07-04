#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    long long ans = 1LL * n * (n + 1) / 2;
    
    long long c[3] = {1, 0, 0};
    int curr_mod = 0;
 
    for (int i = 0; i < n; i++) {
        int v = (s[i] == '0' ? 1 : 2);
        curr_mod = (curr_mod + v) % 3;
        
        ans -= c[curr_mod];
        c[curr_mod]++;
    }
 
 
    long long alt_len = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            alt_len++;
        } else {
            alt_len = 1;
        }
        ans -= (alt_len - 1) / 2;
    }
 
    cout << ans << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}