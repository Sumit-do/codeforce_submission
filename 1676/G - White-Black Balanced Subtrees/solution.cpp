#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n+1);
    vec[1]=0;
    for(int i=2;i<n+1;i++) cin>>vec[i];
    string s;
    cin>>s;
    map<int,pair<int,int>> mpp;
    for(int i=1;i<=n;i++){
      if(s[i-1]=='W'){
        mpp[i].first=1;
        mpp[i].second=0;
        /*int p_idx = vec[i];
        while(p_idx>=1){
          mpp[p_idx].first++;
          p_idx = vec[p_idx];
        }*/
      }
      else{
        mpp[i].first=0;
        mpp[i].second=1;
       /*int p_idx = vec[i];
        while(p_idx>=1){
          mpp[p_idx].second++;
          p_idx = vec[p_idx];
        }*/
      }
    }
    for(int i=n;i>=1;i--){
      int prnt_idx = vec[i];
      if(prnt_idx==0) break;
      mpp[prnt_idx].first += mpp[i].first;
      mpp[prnt_idx].second += mpp[i].second;
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
      if(mpp[i].first==mpp[i].second){
        ans++;
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