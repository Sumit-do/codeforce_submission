#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
const int MOD = 998244353;
const int MAX = 300005; 
 
long long fact[MAX], inv[MAX];
 
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
 
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) fact[i] = (fact[i - 1] * i) % MOD;
    
    inv[MAX - 1] = power(fact[MAX - 1], MOD - 2);
    for (int i = MAX - 2; i >= 0; i--) inv[i] = (inv[i + 1] * (i + 1)) % MOD;
}
 
long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * inv[k] % MOD * inv[n - k] % MOD;
}
int f(int x){
    if(x==1)return 3;
    if(x==2)return 2;
    return 1;
}
void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n){
        cin>>vec[i];
    }
    long long ans=1;
    for(int i=0;i<n;i+=3){
        map<int,int> l;
        l[vec[i]]++;
        l[vec[i+1]]++;
        l[vec[i+2]]++;
        int maax=INT32_MIN;
        for(auto it:l){
            int num=it.first;
            maax=max(maax,num);
            int freq=it.second;
        }
        if(l.size()==2 && l[maax]==2)ans*=1;
        else ans *= f(l.size());
        ans%=998244353;
    }
    long long aa = C(n/3,n/6);
    aa%=998244353;
    ans*=aa;
    ans%=998244353;
    cout<<ans<<endl;
 
 
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    t=1;
    precompute();
    while (t--) solve();
}