#include <bits/stdc++.h>
using namespace std;
 
long long M = 998244353;
long long fact[60];
 
long long power(long long base, long long exp) {
    long long res = 1;
    base %= M;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % M;
        base = (base * base) % M;
        exp /= 2;
    }
    return res;
}
 
long long modInverse(long long n) {
    return power(n, M - 2);
}
 
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    long long num = fact[n];
    long long den = (fact[r] * fact[n - r]) % M;
    return (num * modInverse(den)) % M;
}
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    long long s = 0;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }
 
    long long k = s / n;
    int r = s % n;
 
    int must = 0;
    int flex = 0;
 
    for (int i = 1; i <= n; i++) {
        if (a[i] > k + 1) {
            cout << 0 << "
";
            return;
        }
        if (a[i] == k + 1) {
            must++;
        } else {
            flex++;
        }
    }
 
    if (must > r) {
        cout << 0 << "
";
        return;
    }
 
    long long ans = nCr(flex, r - must);
    ans = (ans * fact[r]) % M;
    ans = (ans * fact[n - r]) % M;
 
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    fact[0] = 1;
    for (int i = 1; i <= 55; i++) {
        fact[i] = (fact[i - 1] * i) % M;
    }
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}