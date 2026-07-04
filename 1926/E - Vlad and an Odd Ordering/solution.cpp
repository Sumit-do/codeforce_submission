#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   ll k,n;
   cin>>n>>k;
   int i=1;
   ll lam=(n+1)/2;
   //if(n%2==1)lam++;
   //cout<<k<<" "<<lam<<" "<<endl;
   while(k>=lam && lam!=0){
    if(k-lam==0){
        // a0=(1<<(i-1)),,, akth = a0 + (k-1)*(1<<(i));
        ll a0=(1<<(i-1));
        ll ak=a0+(lam-1)*(1<<i);
        return void(cout<<ak<<endl);
    }
    k-=lam;
    i++;
    //ll o=lam;
    lam=(n+(1LL<<(i-1)))/(1LL<<(i));
    //if(o%2==1)lam++;
   // cout<<k<<" "<<lam<<" "<<endl;
   }
   // a0=(1<<(i-1)),,, akth = a0 + (k-1)*(1<<(i));
   ll a0=(1<<(i-1));
   //cout<<k<<" "<<i<<endl;
    ll ak = a0 + (ll)(k - 1) * (1LL << i);
    cout<<ak<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}