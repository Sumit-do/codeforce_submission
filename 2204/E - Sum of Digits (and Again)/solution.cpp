#include <bits/stdc++.h>
using namespace std;
 
int sd(int n) {
    int s = 0;
    while (n) s += n % 10, n /= 10;
    return s;
}
 
void solve() {
    string s;
    cin >> s;
    if (s.size() == 1) { cout << s << "
"; return; }
    
    int tot = 0;
    vector<int> c(10, 0);
    for (char x : s) tot += x - '0', c[x - '0']++;
    
    for (int s1 = max(1, tot - 100); s1 <= tot; s1++) {
        string suf = "";
        int cur = s1;
        while (true) {
            suf += to_string(cur);
            if (cur <= 9) break;
            cur = sd(cur);
        }
        
        int suf_sum = 0;
        vector<int> req(10, 0);
        for (char ch : suf) suf_sum += ch - '0', req[ch - '0']++;
        
        if (s1 + suf_sum == tot) {
            bool ok = true;
            for (int i = 0; i < 10; i++) if (c[i] < req[i]) ok = false;
            if (!ok) continue;
            
            vector<int> rem = c;
            for (int i = 0; i < 10; i++) rem[i] -= req[i];
            
            string res = "";
            for (int i = 1; i < 10; i++) {
                if (rem[i]) { res += to_string(i); rem[i]--; break; }
            }
            for (int i = 0; i < 10; i++) {
                while (rem[i]--) res += to_string(i);
            }
            
            cout << res << suf << "
";
            return;
        }
    }
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
}