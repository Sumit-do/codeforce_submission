#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
      if(n==2){
        cout<<4<<endl;
        return;
      }
      int k = (n/2+1)*(n/2+1);
      cout<<k<<endl;
      return;
    }
    if(n==1){
      cout<<4<<endl;
      return;
    }
    long long k = n/2;
    long long kl = 2*(k+1)*(k+2);
    cout<<kl<<endl;
}
 
 
int main(){
  int t=1;
  //cin>>t; 
  while(t--) solve();
  return 0;
}