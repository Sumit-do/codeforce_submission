#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
     int n;
     cin>>n;
     vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    //find most left significaNT BIT 1 numbers
    vector<vector<int>> v(32);
    for(int i=0;i<32;i++){
      for(int j=0;j<n;j++){
        if((vec[j]>>i)==1){
          v[i].push_back(vec[j]);
        }
      }
    }
    long long ans =0;
    for(int i=0;i<32;i++){
      if(v[i].size() > 1){
        int k = v[i].size();
        long long temp = k;
        temp *= (k-1);
        temp /= 2;
        ans += temp;
      }
    }
    cout<<ans<<"
";
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}