#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> uniq_index(n+1);
    if(vec[0]<1){
      uniq_index[1]=1;
    }
    else{
      uniq_index[1]=0;
    }
    for(int i=1;i<n;i++){
      if(vec[i]<(i+1)){
        uniq_index[i+1] += uniq_index[i]+1;
      }
      else{
        uniq_index[i+1]=uniq_index[i];
      }
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
      if(vec[i]<(i+1) && vec[i]>1){
        ans += uniq_index[vec[i]-1];
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