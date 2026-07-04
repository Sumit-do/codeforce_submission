#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
 
 
  void solve(){
    int n,k;
    cin>>n>>k;
    int n1 = n*n-k;
    if(n1==0){
      cout<<"YES
";
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<"D";
        }
        cout<<endl;
      }
      return ;
    }
    if(n1==1){
      cout<<"NO
";
      return ;
    }
    cout<<"YES
";
    cout<<"RL";
    n1-= 2;
    if((n1+2)<=n){
      for(int i=2;i<(n1+2);i++){
        cout<<"L";
      }
      //cout<<endl;
      for(int i=(n1+2);i<n;i++){
        cout<<"D";
      }
      cout<<endl;
      for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<"D";
        }
        cout<<endl;
      }
      return ;
    }
    for(int i=2;i<n;i++){ cout<<"L"; n1--;}
    cout<<endl;
    for(int i=1;i<n;i++){
      for(int j=0;j<n;j++){
        if(n1>0){
          cout<<"U";
          n1--;
        }
        else{
          cout<<"D";
        }
      }
      cout<<endl;
    }
  }
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}