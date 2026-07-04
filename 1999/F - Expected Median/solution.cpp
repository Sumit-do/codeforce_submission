#include <iostream>
#include <vector>
 
using namespace std;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
#define ll long long
 
const int MOD = 1e9 + 7;
const int MAX = 200005; 
 
long long fact[MAX], invFact[MAX];
 
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
    for (int i = 1; i < MAX; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modInverse(fact[i]);
    }
}
 
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return (((fact[n] * invFact[r]) % MOD) * invFact[n - r]) % MOD;
}
 
void solve(){
    int n, k;
    cin >> n >> k;
    
    int cntOnes = 0;
    fr(i, n) {
        int x; 
        cin >> x;
        if(x == 1) cntOnes++;
    }
    
    int cntZeros = n - cntOnes;
    int needed = (k + 1) / 2; // Minimum ones required for median to be 1
    ll ans = 0;
 
    // Iterate through all possible counts of 1s we can have in the subsequence
    // We need at least 'needed' ones, and at most 'k' ones.
    for (int i = needed; i <= k; i++) {
        // We need to pick 'i' ones from 'cntOnes'
        // AND 'k - i' zeros from 'cntZeros'
        
        // Check if we have enough ones and zeros available to pick
        if (i <= cntOnes && (k - i) <= cntZeros) {
            long long ways = (nCr(cntOnes, i) * nCr(cntZeros, k - i)) % MOD;
            ans = (ans + ways) % MOD;
        }
    }
    
    cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin >> t;
    while(t--) solve();
}