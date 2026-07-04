#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int n;
   cin>>n;
   int ans = INT_MIN;
   vector<vector<int>> store(20);
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   if(n==1){
    cout<<1<<endl;
    return;
   }
   for(int i=0;i<20;i++){
    for(int j=0;j<n;j++){
      if(((vec[j]>>i)&1)==1){
        store[i].push_back(j);
      }
    }
   }
   for(int i=0;i<20;i++){
    int temp =0;
    for(int j=0;j<store[i].size();j++){
      ans = max(ans,store[i][j]-temp);
      temp = store[i][j]+1;
      if(j==(store[i].size()-1)){
        ans = max(ans,n-temp);
      }
    }
    //ans = max(ans,n-1-temp);
 
   }
   if(ans==INT_MIN) ans = 0;
   cout<<ans+1<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}