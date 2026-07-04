#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    map<int,int> mpp;
    map<int,vector<int>> mpp1;
    for(int i=0;i<n;i++) {
      cin>>vec[i];
      mpp[vec[i]]++;
      mpp1[vec[i]].push_back(i);
    }
    if(mpp.size()==1){
      cout<<"NO
";
      return ;
    }
    cout<<"YES
";
    int root = vec[0];
    for(auto it:mpp){
      if(it.first == root ) continue;
      for(auto it1 : mpp1[it.first]){
        cout<<1<<" "<<it1+1<<endl;
      }
    }
    for(auto it:mpp){
      if(it.first != root){
        int index = mpp1[it.first][0];
        for(auto it2:mpp1[root]){
          if(it2==0) continue;
          cout<<index + 1<<" "<<it2+1<<endl;
        }
        return ;
      }
    }
 
 
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}