#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
bool cat(pair<int,int> b1 ,pair<int,int> b2 ){
  int a = b1.first;
  int bb = b2.first;
  if(a>bb){
    return false;
  }
  if(a<bb) return true;
  if(a==bb){
    if(b1.second < b2.second) return true;
    return false;
  }
}
 
void solve(){
    int n;
    cin>>n;
    int ans = INT_MAX;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
      int k;
      cin>>k;
      int temp2 = INT_MIN;
      for(int j=0;j<k;j++){
        int temp;
        cin>>temp;
        temp2 = max(temp2,temp-j+1);
      }
      vec[i]={temp2,k};
      ans = min(ans,temp2);
    }
    sort(vec.begin(),vec.end(),cat);
    int face = vec[n-1].first;
    /*int i = n-1;
    while(i>=0 && vec[i].first==face){
      i--;
    }
    int answer = face;*/
    for(int j=n-1;j>=0;j--){
      face = max(vec[j].first,face-vec[j].second);
    }
    cout<<face<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}