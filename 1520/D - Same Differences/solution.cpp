#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
 
 
 
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++) cin>>vec[i];
   vector<int> store(n);
   for(int i=0;i<n;i++){
    store[i]=vec[i]-i;
   }
   //sort(store.begin(),store.end());
   map<int,ll> mpp;
   for(int i=0;i<n;i++) {
    //cout<<store[i]<<endl;
    mpp[store[i]]++;
   }
   ll c=0;
   //for(auto it:mpp) cout<<it.first<<" "<<it.second<<endl;
   for(auto it:mpp){
      c += ((it.second)*(it.second-1))/2;
      //cout<<c<<endl;
   }
   cout<<c<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}