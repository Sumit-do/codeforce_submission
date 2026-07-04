#include<bits/stdc++.h>
using namespace std;
 
 
  void solve(vector<long long >& prime){
    long long  d;
    cin>>d;
    long long j = 1+d;
    while(prime[j]==0) j++;
    long long s = j;
    j += d;
    while(prime[j]==0) j++;
    s *= j;
    cout<<s<<endl;
  }
 
 
int main(){
  int t;
  cin>>t; 
  vector<long long> prime(1e7+1,1);
  prime[0]=0;
  prime[1]=0;
  for(long long i=2;i<=1e7;i++){
    if(prime[i]==1){
      for(long long j = i*i;j<=1e7;j+=i){
          prime[j]=0;
      }
    }
  }
 
  while(t--) solve(prime);
  return 0;
}