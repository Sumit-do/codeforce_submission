#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans = 0;
    int i=0;
    int wait = 0;
    while(i<n){
      if(s[i]=='1') wait = k;
      else{
        wait--;
        if(wait<0) ans++;
      }
      i++;
    }
    cout<<ans<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}