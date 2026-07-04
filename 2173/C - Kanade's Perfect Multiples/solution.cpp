#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    map<int,int> mpp;
    //set<int> yy;
    for(int i=0;i<n;i++) {
      cin>>vec[i];
      mpp[vec[i]]=1;
      //yy.insert(vec[i]);
    }
    //sort(vec.begin(),vec.end());
    vector<int> ans;
    map<int,int> mpp2;
    ///int i=0;
    //int y = mpp.size();
    while(mpp.size()!=0){
      //cout<<mpp2.size()<<" "<<yy.size()<<endl;
      //if(mpp2.size()==yy.size()) break;
      auto it = mpp.begin();
      int temp = it->first;
      vector<int> toErase;
      while(temp<=k && (mpp.count(temp) || mpp2.count(temp))){
        if(mpp.count(temp)) toErase.push_back(temp);
        temp += it->first;
      }
      if(temp<=k && (mpp.count(temp) + mpp2.count(temp))==0){
        cout<<-1<<endl;
        return;
      }
      ans.push_back(it->first);
      for(auto itt:toErase){
        mpp[itt]--;
        if(mpp[itt]==0){
          mpp2[itt]++;
          mpp.erase(itt);
        }
      }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}