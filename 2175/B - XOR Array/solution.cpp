#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
     int n,l,r;
     cin>>n>>l>>r;
     int curr_zor = 0,next_zor = 1,special_l;
     vector<int> vec(n);
     if(l==1){
      special_l = 0;
     }
     for(int i=0;i<n;i++){
      if((i+1)!=(l-1) && (i+1)!=r){
         vec[i]=curr_zor^next_zor;
         curr_zor=next_zor;
         next_zor++;
      }
      else{
         if((i+1)==(l-1)){
            special_l=next_zor;
            vec[i]=curr_zor^next_zor;
            curr_zor=next_zor;
            next_zor++;
         }
         else{
            vec[i]=curr_zor^special_l;
            curr_zor=special_l;
            next_zor++;
         }
      }
     }
     //cout<<endl;
     for(int i=0;i<n;i++) cout<<vec[i]<<" ";
     cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}