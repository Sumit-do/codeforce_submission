#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    ll n;
    cin>>n;
    int num = 0;
    vector<ll> store;
    ll kstore ;
    bool flag = false,fg=true;
    for(int i=61;i>=0;i--){
      if(((n>>i)&1)==1){
        if(flag){
          store.push_back((n-(1LL<<i)));
          if(fg){
            kstore=(1LL<<i);
            fg = false;
          }
        }
        flag = true;
        num++;
      }
    }
    if(num==1){
      cout<<1<<endl;
      cout<<n<<endl;
      return;
    }
    cout<<2+store.size()<<endl;
    cout<<kstore<<" ";
    for(auto it : store) cout<<it<<" ";
    cout<<n<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}