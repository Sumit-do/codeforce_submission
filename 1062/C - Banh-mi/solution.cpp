#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
long long power(long long base, long long exp) {
    long long res = 1;
    long long mod = 1e9 + 7;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
 
 
void solve() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> freq_1(n),freq_0(n);
    if(s[0]=='1'){
        freq_1[0]=1;
        freq_0[0]=0;
    }
    else{
        freq_1[0]=0;
        freq_0[0]=1;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            freq_0[i]=freq_0[i-1];
            freq_1[i]=freq_1[i-1]+1;
 
        }
        else{
            freq_0[i]=freq_0[i-1]+1;
            freq_1[i]=freq_1[i-1];
        }
    }
    fr(i,q){
        int l,r;
        cin>>l>>r;
        int f_0=freq_0[r-1]-freq_0[l-1];
        int f_1=freq_1[r-1]-freq_1[l-1];
        if(s[l-1]=='1')f_1++;
        else f_0++;
        ll a1 = power(2,f_1)-1;
        a1%=(ll)1e9 + 7;
        ll a2=power(2,f_0);
        a2%=(ll)1e9 + 7;
        cout<<(a1*a2)%((ll)1e9 + 7)<<endl;
    }
}
 
int main() {
    fast_io;
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}