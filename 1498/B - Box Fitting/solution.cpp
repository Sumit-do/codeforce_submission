#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      mpp[temp]++;
    }
    int ans =0;
 
    while(!mpp.empty()){
      ans++;
      int left = k;
      auto it = mpp.rbegin();
      while(it!=mpp.rend()){
        int weight = it->first;
        int count = it->second;
        if(left>=weight && count>0){
          int will_req = min(count,left/weight);
          left -= (will_req*weight);
          mpp[weight] -= will_req;
        }
        it++;
      }
      vector<int> toearse;
      for(auto it:mpp){
        if(it.second==0){
          toearse.push_back(it.first);
        }
      }
      for(auto it:toearse){
        mpp.erase(it);
      }
    }
    cout<<ans<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}