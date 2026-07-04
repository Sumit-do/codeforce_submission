#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> vec1(n),vec2(m);
    queue<int> q;
    for(int i=0;i<n;i++) {
      cin>>vec1[i];
      //q.push(vec1[i]);
    }
    for(int i=0;i<m;i++){
      cin>>vec2[i];
      q.push(vec2[i]);
    }
    long long ans =0;
    sort(vec1.begin(),vec1.end());
    for(int i=n-1;i>=0;i--){
      int x = q.front();
      ans += min(x,vec2[vec1[i]-1]);
      if(x<vec2[vec1[i]-1]){
        q.pop();
      }
    }
    cout<<ans<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}