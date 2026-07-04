#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    if (n % 2 == 0) {
        vector<int> even(26, 0), odd(26, 0);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) even[s[i] - 'a']++;
            else odd[s[i] - 'a']++;
        }
        int max_e = 0, max_o = 0;
        for (int i = 0; i < 26; i++) {
            max_e = max(max_e, even[i]);
            max_o = max(max_o, odd[i]);
        }
        cout << n - max_e - max_o << "
";
    } else {
        vector<vector<int>> pref(2, vector<int>(26, 0));
        vector<vector<int>> suff(2, vector<int>(26, 0));
 
        for (int i = 0; i < n; i++) {
            suff[i % 2][s[i] - 'a']++;
        }
 
        int ans = n;
        for (int i = 0; i < n; i++) {
            suff[i % 2][s[i] - 'a']--;
 
            int max_e = 0, max_o = 0;
            for (int j = 0; j < 26; j++) {
                int current_even = pref[0][j] + suff[1][j];
                int current_odd = pref[1][j] + suff[0][j];
                max_e = max(max_e, current_even);
                max_o = max(max_o, current_odd);
            }
            
            ans = min(ans, 1 + (n - 1) - max_e - max_o);
            pref[i % 2][s[i] - 'a']++;
        }
        cout << ans << "
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}