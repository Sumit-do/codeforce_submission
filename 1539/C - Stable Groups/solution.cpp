#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
 
long long f(ll a , ll x ){
  if(a%x==0 && a!=0) return a/x-1;
  return a/x;
}
 
 
 
void solve(){
   ll n,k,x;
   cin>>n>>k>>x;
   vector<ll> vec(n);
   for(int i=0;i<n;i++) cin>>vec[i];
   sort(vec.begin(),vec.end());
   vector<ll> diff;
   for(int i=0;i<n-1;i++){
    if((vec[i+1]-vec[i])>x){
      diff.push_back(vec[i+1]-vec[i]);
    }
   }
   sort(diff.begin(),diff.end());
   for(int i=0;i<diff.size();i++){
    if(f(diff[i],x)<=k){
      if(diff[i]%x==0 && diff[i]!=0){
        k -= diff[i]/x-1;
        diff[i]=0;
        continue;
      }
      k -= diff[i]/x;
      diff[i]=0;
    }
    else{
      break;
    }
   }
   int i=0;
    while(i<diff.size() && diff[i]==0){
      i++;
    }
    int k1 = diff.size()-i;
    cout<<k1+1<<endl;
}
 
 
int main(){
  int t=1;
  //cin>>t; 
  while(t--) solve();
  return 0;
}