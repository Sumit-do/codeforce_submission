#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
      cout<<n/2<<" "<<n/2<<endl;
    }
    else{
      int ans  =n-1 ;
      int a=1,b=n-1;
      for(int i=2;i*i<=n;i++){
        if(n%i != 0) continue;
        int nn = i-1;
        ans = min(ans,nn*(n/i));
        if(ans == (nn*(n/i))){
          a = n/i , b = nn*(n/i);
        }
      }
      cout<<a<<" "<<b<<endl;
    }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}