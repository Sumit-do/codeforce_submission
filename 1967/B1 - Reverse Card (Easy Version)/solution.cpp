#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    for(ll b=1;b<=m;b++){
            ans += (n+b)/(b*b);
    }
    cout<<ans-1<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}