#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
long long f(long long x){
  long long p2 = 8*x +1 ;
  long long w = p2;
  bool flag = false;
  p2 = sqrt(p2);
  if(p2*p2 != w){
    flag = true;
  }
  p2--;
  if(p2%2==1){
    p2/=2;
    p2++;
    return p2;
  }
  else{
    p2 /= 2;
  }
  
  if(flag){
    p2++;
  }
  return p2;
}
 
long long f1(long long x){
  long long p2 = 8*x +1 ;
  bool flag = false;
  p2 = sqrt(p2);
  p2--;
  p2 /=2;
  return p2;
}
 
 
void solve(){
    int k;
    cin>>k;
    long long x;
    cin>>x;
    long long fh = (((long long)k)*(((long long)(k-1))))/2,mid=((((long long)k))*(((long long)(k+1))))/2,end = ((long long)k)*((long long)k);
    if(x<=fh){
      cout<<f(x)<<endl;
    }
    else if(x<=mid){
      cout<<k<<endl;
    }
    else if(x<=end){
      x = end-x;
      //cout<<x<<endl;
      long long  yn = f1(x);
      //cout<<yn<<endl;
      cout<<(2*k-1-yn)<<endl;
    }
    else{
      cout<<2*k-1<<endl;
    }
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}