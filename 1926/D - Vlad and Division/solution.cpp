#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int n;
   cin>>n;
   map<int,int> mpp;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    mpp[temp]++;
   }
   int ans = 0;
   while(mpp.size()!=0){
    auto it = mpp.begin();
    int tosearch = 2147483647 - it->first;
    if(mpp.count(tosearch)){
      mpp[tosearch]--;
      if(mpp[tosearch]==0) mpp.erase(tosearch);
    }
    mpp[it->first]--;
    if(mpp[it->first]==0) mpp.erase(it->first);
    ans++;
   }
   cout<<ans<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}