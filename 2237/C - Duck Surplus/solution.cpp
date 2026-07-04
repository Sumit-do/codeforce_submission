#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    long long max_val = 0;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        
        if (x < max_val) {
            max_val += x;
        } else {
            max_val = x;
        }
    }
    
    cout << max_val << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--)solve();
    return 0;
}