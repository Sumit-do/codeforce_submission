#include<bits/stdc++.h>
using namespace std;
 
  long long lcm(long long a , long long b){
    return (a*b)/(__gcd(a,b));
  }
 
 
  void solve(){
    long long n;
    cin>>n;
    long long res = LLONG_MIN,lccm=LLONG_MAX;
    if(n%2==0){
      cout<<n/2<<" "<<n/2<<endl;
      return ;
    }
    for(long long i=1;i*i<=n;i++){
      if(i==1){
        res = 1;
        lccm = n-1;
        continue;
      }
      if(lccm > lcm(i,n-i)){
        lccm = lcm(i,n-i);
        res=i;
      }
 
      if(n%i==0){ 
        if(lccm > lcm(n/i,n-n/i)){
          lccm = lcm(n/i,n-n/i);
          res = n/i;
        }
      }
    }
    cout<<res<<" "<<n-res<<endl;
  }
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}