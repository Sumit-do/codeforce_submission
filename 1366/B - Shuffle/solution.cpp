#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
bool f(int L,int R,int l,int r){
  if((L<=l && l<=R) || (L<=r && r<=R)) return true;
  if((l<=L && L<=r) && (l<=R && R<=r)) return true;
  return false;
}
 
void solve(){
    int n,x,m;
    cin>>n>>x>>m;
    int L_max =x,R_max =x;
    for(int i=0;i<m;i++){
      int l,r;
      cin>>l>>r;
      if(f(L_max,R_max,l,r)){
        L_max = min(L_max,l);
        R_max = max(R_max,r);
      }
    }
    cout<<R_max-L_max+1<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}