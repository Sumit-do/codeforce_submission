#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++) cin>>vec[i];
   int maxx = vec[0];
   int ans =0;
   for(int i=1;i<n;i++){
      if(maxx>vec[i]) ans++;
      maxx = max(maxx,vec[i]);
   }
   cout<<ans<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}