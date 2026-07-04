#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
 
 
  void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    //vector<int> vec(n+1,0);
    //vec[0]=1;
    //vec[1]=1;
    long long res=0;
    vector<int> visited(n+1,0);
    for(int i=1;i<=n;i++){
      if(s[i-1]=='0' ){
        //res++;
        for(int j = i;j<=n;j += i){
          if(s[j-1]=='0'){
            //s[j-1]='1';
            if(visited[j]==1) continue;
            visited[j]=1;
            //cout<<j<<" "<<i<<" "<<endl;
            res += i;
          }
          else{
            break;
          }
        }
      }
    }
    cout<<res<<endl;
  }
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}