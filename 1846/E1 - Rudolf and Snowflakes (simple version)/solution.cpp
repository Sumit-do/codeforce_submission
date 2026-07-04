#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
long long f(int k,int n){
  long long j = 1;
  while(n--) j *= k;
  j--;
  j /= (k-1);
  return j;
}
 
void solve(map<long long,int>& vec){
    int n;
    cin>>n;
    if(vec[n]==123){
      cout<<"YES
";
    }
    else{
      cout<<"NO
";
    }
}
 
 
int main(){
  int t;
  cin>>t; 
  map<long long , int> mpp;
  for(int i=3;i<=20;i++){
    for(int j=2;j<=1000;j++){
      mpp[f(j,i)]=123;
    }
  }
  while(t--) solve(mpp);
  return 0;
}