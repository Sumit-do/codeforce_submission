#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; 
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
 
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    for(int i = 0; i < n; i++) {
        if(sorted_a[i] > b[i]) {
            cout << -1 << "
";
            return;
        }
    }
 
    long long cost = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] <= b[j]) {
                cost += i; 
                a.erase(a.begin() + i); 
                break;
            }
        }
    }
    
    cout << cost << "
";
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}