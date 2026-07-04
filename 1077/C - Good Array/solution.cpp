#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    map<ll,int> mpp;
    ll sum =0;
    for(int i=0;i<n;i++){
      cin>>vec[i];
      sum += vec[i];
      mpp[vec[i]]++;
    }
    vector<ll> res;
    for(int i=0;i<n;i++){
      if((sum-vec[i])%2==0){
        ll t = (sum-vec[i])/2;
        if(t==vec[i] && mpp[t]>=2){
          res.push_back(i);
        }
        if(t!=vec[i] && mpp.count(t)){
          res.push_back(i);
        }
        
      }
    }
    cout<<res.size()<<endl;
    if(res.size()==0) return;
    for(auto it:res) cout<<it+1<<" ";
    cout<<endl;
 
}
 
 
 
int main(){
  int t=1;
  //cin>>t; 
  while(t--) solve();
  return 0;
}