#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec(n);
    fr(i,n)cin>>vec[i];
    fr(i,n)cin>>vec[i];
    int count=0;
    fr(i,n){
        ll test=1;
        if((i-1)>=0){
            ll u = __gcd(vec[i-1],vec[i]);
            test=test*u/(__gcd(u,test));
        }
        if((i+1)<n){
            ll u = __gcd(vec[i+1],vec[i]);
            test=test*u/(__gcd(u,test));
        }
        if(test!=vec[i])count++;
    }
    cout<<count<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    //precompute();
    int t=1;
    cin >> t;
    while (t--) solve();
}