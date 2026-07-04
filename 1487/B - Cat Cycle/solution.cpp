#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int g(int k,int n){
  if(k==0)  return n;
  return k;
}
void solve(){
     int n,k;
     cin>>n>>k;
     if(n%2==1){
      int lmd = n/2;
      int frq = k/lmd;
      if(k%lmd == 0) frq--; 
      /*if(lmd == 1){
        cout<<g(((g(k%(n),n)+frq)%n),n)<<endl;
        return ;
      }*/
      cout<<g(((g(k%(n),n)+frq)%n),n)<<endl;
     }
     else{
      cout<<g(k%n,n)<<endl;
     }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}