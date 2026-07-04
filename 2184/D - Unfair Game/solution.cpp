#include<bits/stdc++.h>
using namespace std;
 
 
const int MOD = 1e9 + 7;
const int MAXN = 100000;
 
vector<long long> fact(MAXN + 1), invFact(MAXN + 1);
 
long long modpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++)
        fact[i] = fact[i - 1] * i % MOD;
 
    invFact[MAXN] = modpow(fact[MAXN], MOD - 2);
 
    for (int i = MAXN; i >= 1; i--)
        invFact[i - 1] = invFact[i] * i % MOD;
}
 
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
 
int f(int x){
    int ans=0;
    while(x>0){
        ans++;
        x/=2;
    }
    return ans;
}
 
void solve(){
    int n,k;cin>>n>>k;
    n--;
    long long ans=0;
    int len=f(n);
    for(int i=1;i<=len;i++){
        for(int j=i;j<=len;j++){
            int left_for0=j-i;
            long long count_this_seq=nCr(j-1,left_for0);
            long long cost = 2*i - 1;
            cost+=left_for0;
           // cout<<cost<<endl;
            if(cost>k)ans+=count_this_seq;
        }
    }
    if((len+1)>k)ans++;
    //cout<<n<<" "
    cout<<ans<<endl;
}
 
 
 
int main(){
    precompute();
    int t;cin>>t;
    while(t--)solve();
    return 0;
}