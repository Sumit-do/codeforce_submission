#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
bool check(ll n,ll x,int i){
    for(int j=i;j<64;j++){
        if(((n>>j)&1)!=((x>>j)&1))return false;
    }
    return true;
}
 
void solve() {
   ll n,x;
   cin>>n>>x;
   if(n==0 && x==0)return void(cout<<0<<endl);
   if(n<x)return void(cout<<-1<<endl);
   if(x==0){
    for(int i=63;i>=0;i--){
        if(((n>>i)&1)==1){
            return void(cout<<(1LL<<(i+1))<<endl);
        }
    }
    return void(cout<<-1<<endl);
   }
   for(ll i=0;i<64;i++){
    if(((n>>i)&1)==1 && ((x>>i)&1)==1){
        for(ll j=i-1;j>=0;j--){
            if(((n>>j)&1)==1){
                if(j==i-1)return void(cout<<-1<<endl);
                n -= (1LL<<j);
                n +=(1LL<<(j+1));
                for(ll y=j-1;y>=0;y--){
                    if(((n>>y)&1)==1)n-=(1LL<<y);
                }
                if(check(n,x,i))return void(cout<<n<<endl);
                else return void(cout<<-1<<endl);
            }
        }
        if(check(n,x,i))return void(cout<<n<<endl);
        else return void(cout<<-1<<endl);
    }
    else if(((x>>i)&1)==1)return void(cout<<-1<<endl);
    //else if()
   }
   cout<<-1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}