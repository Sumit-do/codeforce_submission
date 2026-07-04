#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
 
bool cat(pair<int,char> a, pair<int,char> b){
    if(a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int,char>> vec(26);
    vector<int> f(26,0);
    fr(i,n) f[s[i]-'a']++;
    fr(i,26) vec[i] = {f[i], 'a'+i};
    
    sort(vec.begin(), vec.end(), cat);
    
    int ans = INT32_MAX, note = 0;
    for(int i=1; i<=26; i++){
        if(n % i != 0) continue;
        int temp = 0;
        for(int j=0; j<i; j++) temp += max(0, n/i - vec[j].first);
        if(temp < ans) {
            ans = temp;
            note = i;
        }
    }
    
    cout << ans << "
"; 
    
    vector<char> res(n, 'A');
    for(int i=0; i<note; i++){
        char t = vec[i].second;
        int count = 0, fry = n/note;
        fr(j,n) {
            if(s[j] == t && count < fry) {
                res[j] = t;
                count++;
            }
        }
    }
    
    for(int i=0; i<note; i++){
        char t = vec[i].second;
        int count = 0, fry = n/note;
        fr(j,n) if(res[j] == t) count++;
        
        fr(j,n) {
            if(res[j] == 'A' && count < fry) {
                res[j] = t;
                count++;
            }
        }
    }
    
    fr(i,n) cout << res[i];
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}