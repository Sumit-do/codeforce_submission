#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
   int m;
   cin>>m;
   vector<int> mpp(31,0);
   for(int i=0;i<m;i++){
    int t,v;
    cin>>t>>v;
    if(t==1){
      mpp[v]++;
    }
    else{
      vector<int> nw = mpp;
      bool flag = true;
      for(int i=0;i<32;i++){
        if(((v>>i)&1)==1){
          int j = i;
          int multi=1;
          while(j>=0){
            if(nw[j]){
              int temp = multi;
              multi -= nw[j];
              if(nw[j]<=temp) nw[j]=0;
              else nw[j] -= temp;
              if(multi<=0) break;
              else{
                j--;
                multi *= 2;
              }
            }
            else {
              j--;
              multi *= 2;
            }
          }
          if(multi>0){
            flag = false;
            break;
          }
        }
      }
      if(flag) cout<<"YES
";
      else cout<<"NO
";
    }
   }
}
 
 
int main(){
  int t=1;
  //cin>>t; 
  while(t--) solve();
  return 0;
}