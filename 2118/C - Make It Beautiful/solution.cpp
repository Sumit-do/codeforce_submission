#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int  n;
    ll k;
    cin>>n>>k;
    vector<ll> vec(n);
    ll beauty = 0;
    vector<ll> cost ;
    for(int i=0;i<n;i++){
      cin>>vec[i];
      for(int j=0;j<62;j++){
        if(((vec[i]>>j)&1LL)==1LL){
          beauty++;
        }
        else{
          cost.push_back((1LL<<j));
        }
      }
    }
    sort(cost.begin(),cost.end());
    int i=0;
    //cout<<k<<endl;
    while(i<cost.size() && k>0){
      //cout<<cost[i]<<endl;
      k -= cost[i];
      if(k>=0) beauty++;
      //cout<<k<<endl;
      i++;
    }
    cout<<beauty<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}