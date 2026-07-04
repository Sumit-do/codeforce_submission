#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n ;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int i=1;
    while(i<n){
      if(i==n-1) break;
      int left = vec[i-1];
      int right = vec[i+1];
      if(left <= vec[i] && vec[i]<=right){
        vec[i]=left;
      }
      i++;
    }
    i=1;
    while(i<n){
      if(i==n-1) break;
      int left = vec[i-1];
      int right = vec[i+1];
      if(left > vec[i] && vec[i]>right){
        vec[i]=left;
      }
      i++;
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
      if(i==n-1) {
        ans.push_back(vec[i]);
        break;
      }
      int next = vec[i+1];
      if(vec[i]!=next) ans.push_back(vec[i]);
    }
    if(ans.size()==1){
      cout<<2<<endl;
      cout<<vec[0]<<vec[1]<<endl;
      return ;
    }
    cout<<ans.size()<<endl;
    for(auto it : ans) cout<<it<<" ";
    cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}