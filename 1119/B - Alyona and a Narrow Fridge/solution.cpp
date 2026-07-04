#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,h;
    cin>>n>>h;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int ans = 0;
    for(int k=1;k<=n;k++){
      vector<int> vec1;
      for(int i=0;i<k;i++) vec1.push_back(vec[i]);
      sort(vec1.begin(),vec1.end());
      if(k%2==0){
        int h1=h,hj=0;
        while(h1>=0 && (hj+1)<k){
          h1 -= max(vec1[hj],vec1[hj+1]);
          hj+=2;
        }
        if(h1>=0) ans = k;
      }
      else{
        int h1=h,hj=1;
        h1-=vec1[0];
        while(h1>=0 && (hj+1)<k){
          h1 -= max(vec1[hj],vec1[hj+1]);
          hj+=2;
        }
        if(h1>=0) ans = k;
      }
    }
    cout<<ans<<endl;
}
 
 
 
int main(){
  int t=1;
  //cin>>t; 
  while(t--) solve();
  return 0;
}