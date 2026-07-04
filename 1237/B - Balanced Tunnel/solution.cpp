#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> vec1(n);
    for(int i=0;i<n;i++) cin>>vec1[i];
    int i=0,j=0;
    int ans =0;
    map<int,int> mpp;
    while(i<n && j<n){
      if(mpp.count(vec[j])!=0){
        j++;
        continue;
      }
      if(vec1[i]==vec[j]){
        i++;
        j++;
      }
      else{
        ans++;
        mpp[vec1[i]]++;
        i++;
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