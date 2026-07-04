#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n,x;
    cin>>n>>x;
    if(n==1 && x!=0){
      cout<<x<<endl;
      return;
    }
    int num =0;
    for(int i=0;i<32;i++){
      if(((x>>i)&1)==1) num++;
    }
    if(num>n){
      cout<<x<<endl;
      return;
    }
    if(n%2==0 && x==0){
      cout<<n<<endl;
      return;
    }
    if(n%2==1 && x==0){
      if(n<3) { cout<<-1<<endl; return;}
      cout<<(n-3)+6<<endl;
      return;
    }
    if(n%2==0 && x==1){
      cout<<(n+3)<<endl;
      return ;
    }
    if(n%2==1){
      if(num%2==1){
        cout<<(n-num+x)<<endl;
      }
      else{
        cout<<(n-num+x+1)<<endl;
      }
      return;
    }
    else{
      if(num%2==0){
        cout<<(n-num+x)<<endl;
      }
      else{
        cout<<(n-num+x+1)<<endl;
      }
      return;
    }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}