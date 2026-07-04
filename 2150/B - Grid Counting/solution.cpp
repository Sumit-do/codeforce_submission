#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
const int MAXN = 200005;
 
long long fact[MAXN], invFact[MAXN];
 
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
long long modInverse(long long n) {
    return power(n, MOD - 2);
}
 
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}
 
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
 
    int mid = (n + 1) / 2;
    
    for (int i = mid + 1; i <= n; i++) {
        if (a[i] > 0) {
            cout << 0 << "
";
            return;
        }
    }
 
    long long ans = 1;
    int used = 0;
 
    for (int i = mid; i >= 1; i--) {
        int options = n - 2 * i + 2;
        int left_options = options - used;
        
        if (left_options < a[i]) {
            cout << 0 << "
";
            return;
        }
        
        ans = (ans * nCr(left_options, a[i])) % MOD;
        used += a[i];
    }
 
    if (used != n) {
        cout << 0 << "
";
        return;
    }
 
    cout << ans << "
";
}
 
int main() {
    precompute();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}