#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int i=0;
    if(n==1){
      cout<<0<<endl;
      return;
    }
   while(i<n && s[i]=='0'){
    i++;
   }
   int max_len = INT_MIN;
   int store = i;
   i++;
   while((i%n)!=store){
    int ans = 0;
    while(s[(i%n)]=='0'){
      ans++;
      i++;
    }
    max_len = max(max_len,ans);
    while((i%n)!=store && s[(i%n)]=='1') i++;
   }
   cout<<max_len<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}