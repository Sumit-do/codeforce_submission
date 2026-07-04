#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
long long power(long long a, long long b) {
    long long res = 1;
    const long long MOD = 998244353;
    a %= MOD;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
 
void solve(){
    ll n;
    cin>>n;
    vector<ll>vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> freq(n+1,-1);
    for(int i=n-1;i>=0;i--){
        int indx=i+1;
        for(int j=indx;j<=n;j+=indx){
            freq[indx]=max(freq[indx],vec[j-1]);
        }
    }
    vector<ll> l(1e5+1,0);
    //(2^l-1)*(2^(l1-l))*val
    fr(i,n){
        l[freq[i+1]]++;
    }
    vector<ll> l1(1e5+1,0);
    l1[0]=l[0];
    for(int i=1;i<=1e5;i++){
        l1[i]=l1[i-1]+l[i];
    }
    ll ans =0;
    fr(i,1e5+1){
        //ll temp=(power(2,l[i])-1)*(power(2,l1[i]-l[i]));
        if(l[i]==0)continue;
        ll temp = power(2,l1[i])-(power(2,l1[i]-l[i]))+ 998244353;
        temp%=(998244353);
        ans += (temp*i)%(998244353);
        ans %=(998244353);
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}