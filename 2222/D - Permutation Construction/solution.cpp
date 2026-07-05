#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<pair<long long, int>> S(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        S[i] = {sum, i};
        sum += a;
    }
    
    sort(S.begin(), S.end());
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[S[i].second] = n - i;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
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