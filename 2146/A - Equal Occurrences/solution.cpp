#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    // count frequencies
    map<int,int> freq;
    for (int x : a) freq[x]++;
 
    vector<int> counts;
    for (auto &p : freq) counts.push_back(p.second);
 
    int ans = 0;
    int maxFreq = *max_element(counts.begin(), counts.end());
 
    for (int x = 1; x <= maxFreq; x++) {
        int cnt = 0;
        for (int f : counts) {
            if (f >= x) cnt++;
        }
        ans = max(ans, cnt * x);
    }
 
    cout << ans << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
}