#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    long long d;
    if (!(cin >> n >> d)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<long long> a2(3 * n);
    for (int i = 0; i < 3 * n; i++) {
        a2[i] = a[i % n];
    }
    
    vector<long long> p(3 * n + 1, 0);
    for (int i = 0; i < 3 * n; i++) {
        p[i + 1] = p[i] + a2[i];
    }
    
    long long max_happiness = 0;
    for (int i = 0; i < n; i++) {
        int L = i + n - d;
        int R = i + n + d;
        
        long long sum_neighbors = (p[R + 1] - p[L]) - a2[i + n];
        long long coeff = 2 * d * a[i] - sum_neighbors;
        if (coeff > 0) {
            max_happiness += coeff;
        }
    }
    
    cout << max_happiness << endl;
}
 
int main() {
    int t;cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}