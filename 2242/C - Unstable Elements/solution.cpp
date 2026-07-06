#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> c;
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            c.push_back(count);
            count = 1;
        }
    }
    c.push_back(count);
    sort(c.begin(), c.end());
 
    long long s = 0;
    for (int x : c) {
        s += x;
    }
 
    int m = c.size();
    int ans = 0;
 
    for (int i = 0; i < m; i++) {
        if (i == 0 || c[i] > c[i - 1]) {
            int m_prime = m - i;
            long long diff = k - s;
            if (diff % m_prime == 0) {
                long long x = diff / m_prime;
                if (x + c[i] >= 1) {
                    ans++;
                }
            }
        }
        s -= c[i];
    }
 
    cout << ans << "
";
}
 
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}