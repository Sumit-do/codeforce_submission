#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    map<int,int> mpp;
    map<int,int > mpp_first;
    map<int,vector<int>> mpp2;
    for(int i=0;i<n;i++){
      int k;
      cin>>k;
      mpp2[i].push_back(k);
      for(int j=0;j<k;j++){
        int temp ;
        cin>>temp;
        mpp2[i].push_back(temp);
        mpp[temp]++;
        if(mpp[temp]==1){
          mpp_first[temp]=i;
        }
      }
    }
    int l=0;
    for(auto it:mpp){
      if(it.second==1){
        int u=0;
        l++;
        for(auto it2:mpp2[mpp_first[it.first]]){
          if(u==0){
            u++;
            continue;
          }
          mpp[it2]++;
        }
      }
    }
    if(l==n){
      cout<<"NO
";
    }
    else{
      cout<<"YES
";
    }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}