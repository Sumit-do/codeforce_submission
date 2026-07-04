#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
  void rec(int win,int loose,bool flag , int & result){
    if(win==loose && win==1){
      result++;
      return ;
    }
    if(flag){
      result+=win/2;
      //cout<<win<<" "<<loose<<" "<<"U"<<endl;
      rec(win - win/2,loose + win/2,!flag,result);
    }
    else{
      result+= loose/2;
      //cout<<win<<" "<<loose<<" "<<"L"<< endl;
      rec(win ,loose - loose/2,!flag,result);
    }
  }
 
 
  void solve(){
    int n;
    cin>>n;
    int res = 0;
    bool flag = true;
    rec(n,0,flag,res);
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