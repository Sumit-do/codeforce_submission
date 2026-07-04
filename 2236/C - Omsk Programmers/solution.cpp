#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, x;
    cin >> a >> b >> x;
    
    vector<long long> A, B;
    for (long long v = a; ; v /= x) { A.push_back(v); if (!v) break; }
    for (long long v = b; ; v /= x) { B.push_back(v); if (!v) break; }
    
    long long ans = 2e18;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            ans = min(ans, i + j + abs(A[i] - B[j]));
        }
    }
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; 
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}