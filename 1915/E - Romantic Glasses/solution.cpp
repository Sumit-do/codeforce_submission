#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   vector<long long> prefix_o(n);
   prefix_o[0]=vec[0];
   for(int i=1;i<n;i++){
    if(i%2==0){
      prefix_o[i] = prefix_o[i-1]+vec[i];
    }
    else{
      prefix_o[i] = prefix_o[i-1]-vec[i];
    }
   }
   map<long long,int> mpp;
   for(int i=0;i<n;i++){
    mpp[prefix_o[i]]++;
   }
   bool flag = false;
   for(auto it:mpp){
    if(it.first == 0){
      flag = true;
      break;
    }
    if(it.second>1){
      flag = true;
      break;
    }
   }
   if(flag){
    cout<<"YES
";
   }
   else{
    cout<<"NO
";
   }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}