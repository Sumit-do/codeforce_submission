#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
const int MOD = 1e9 + 7;
const int MAX = 200005;
 
long long fact[MAX], invFact[MAX];
 
// Fast exponentiation
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
 
// Fermat's Little Theorem for modular inverse
long long modInverse(long long n) {
    return power(n, MOD - 2);
}
 
// Precompute factorials and inverse factorials in O(N)
void precompute() {
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX - 1] = modInverse(fact[MAX - 1]);
    for (int i = MAX - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}
 
// Calculate nCr % MOD in O(1)
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
 
 
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> f(n+1,0);
    fr(i,n)f[vec[i]]++;
    sort(vec.begin(),vec.end(),greater<int> ());
    int yu=k-1;
    while(yu>=0 && vec[yu]==vec[k-1])yu--;
    yu++;
    //cout<<yu<<endl;
    int to_find=k-yu;
    //cout<<f[vec[k-1]]<<to_find<<endl;
    ll asn = nCr(f[vec[k-1]],to_find);
    cout<<asn<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    precompute();
    int t=1;
    cin >> t;
    while (t--) solve();
}