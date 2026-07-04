#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
const int MAXN = 1000001; 
int spf[MAXN];
 
 
void buildSieve() {
    for (int i = 2; i < MAXN; i++) {
        if (spf[i] == 0) { // i is prime
            for (int j = i; j < MAXN; j += i)
                if (spf[j] == 0) spf[j] = i;
        }
    }
}
 
 
ll countFactors(int x) {
    if (x == 1) return 1;
    int totalFactors = 1;
    
    while (x > 1) {
        int p = spf[x];
        int exponent = 0;
        while (x % p == 0) {
            exponent++;
            x /= p;
        }
        totalFactors *= (exponent + 1);
    }
    return totalFactors;
}
 
void solve(vector<ll> & dp) {
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    buildSieve();
    vector<ll> dp(1e6+1,0);
    dp[1]=1;
    vector<ll> presum(1e6+1,0);
    presum[1]=1;
    for(int i=2;i<=1e6;i++){
        dp[i]=(presum[i-1] + countFactors(i))%(998244353);
        presum[i]=(presum[i-1]+dp[i])%(998244353);
    }
    //cin >> t;
    while (t--) solve(dp);
}