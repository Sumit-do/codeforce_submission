#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int i=0;
    int total_v=0;
    vector<int> left(n);
    while(i<n){
      int count=0;
      while(i<n && s[i]=='o') {
        left[i]=total_v;
        i++;
      }
      while(i<n && s[i]=='v'){
        count++;
        i++;
      }
      total_v += count-1;
    }
    vector<int> right(n);
    i=n-1;
    total_v=0;
    while(i>=0){
      int count =0;
      while(i>=0 && s[i]=='o'){
        right[i]=total_v;
        i--;
      }
      while(i>=0 && s[i]=='v'){
        count++;
        i--;
      }
      total_v += (count-1);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
      if(s[i]=='o') {
        //cout<<left[i]<<" "<<right[i]<<endl;
        ans+= (ll)(left[i])*(ll)(right[i]);
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