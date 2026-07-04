#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
   ll n,x;
   cin>>n>>x;
   ll a = n-x,b=n+x-2;
   set<ll> s;
   for(ll i=1;i*i<=a;i++){
    if(a%i!=0)continue;
    if(i*i==a){
        if(i%2==0 && (2*x-2 <= i))s.insert(i);
        continue;
    }
    if(i%2==0 && (2*x-2 <= i))s.insert(i);
    if((a/i)%2==0 && (2*x-2 <= (a/i)) )s.insert(a/i);
   }
   for(ll i=1;i*i<=b;i++){
    if(b%i!=0)continue;
    if(i*i==b){
        if(i%2==0 && (2*x-2 <= i))s.insert(i);
        continue;
    }
    if(i%2==0 && (2*x-2 <= i))s.insert(i);
    if((b/i)%2==0 && (2*x-2 <= (b/i)))s.insert(b/i);
   }
   //for(auto it:s)cout<<it<<" ";
   //cout<<endl;
   cout<<s.size()<<endl;
   //for(auto it:s)cout<<it<<" ";
   //cout<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}