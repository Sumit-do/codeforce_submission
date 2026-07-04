#include<bits/stdc++.h>
using namespace std;
 
 
  void solve(){
    long long n,k;
    cin>>n>>k;
    long long res =LLONG_MAX;
    for(long long i=1;i*i<=n;i++){
      if(n%i==0 && i<=k){
        long long b = n/i;
        res = min(res, n/i);
        if(b<=k) res = min(res,n/b);
      }
    }
    cout<<res<<endl;
  }
 
 
int main(){
  int t;
  cin>>t; 
  /*vector<long long> prime(1e7+1,1);
  prime[0]=0;
  prime[1]=0;
  for(long long i=2;i<=1e7;i++){
    if(prime[i]==1){
      for(long long j = i*i;j<=1e7;j+=i){
          prime[j]=0;
      }
    }
  }*/
 
  while(t--) solve();
  return 0;
}