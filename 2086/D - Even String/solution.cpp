#include<bits/stdc++.h>
using namespace std;
 
const long long MOD = 998244353;
vector<long long> bi(5e5+5, 1);
 
void precompute() {
    for(int i=2; i<=500000; i++) bi[i] = (bi[i-1] * i) % MOD;
}
 
long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
long long modinv(long long x) {
    return modpow(x, MOD - 2);
}
 
long long modDivide(long long a, long long b) {
    return a % MOD * modinv(b) % MOD;
}
 
void solve() {
    vector<long long> c(26, 0);
    long long base = 1;
    long long sum = 0;
    
    for(int i=0; i<26; i++) {
        cin >> c[i];
        base = (base * bi[c[i]]) % MOD;
        sum += c[i];
    }
    
    long long a1 = sum / 2;
    long long a2 = sum - a1;
    long long num = (bi[a1] * bi[a2]) % MOD;
    long long ans_part1 = modDivide(num, base);
    
    vector<long long> dp(a1 + 1, 0);
    dp[0] = 1;
    
    for(int i=0; i<26; i++) {
        if(c[i] == 0) continue;
        for(int j = a1; j >= c[i]; j--) {
            dp[j] = (dp[j] + dp[j - c[i]]) % MOD;
        }
    }
    
    long long ans = (ans_part1 * dp[a1]) % MOD;
    cout << ans << "
";
}
 
int main() {
    precompute();
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}