#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int len_max = 1;
    bool is1_gone = false;
    if(vec[0]!=1) {
      is1_gone = true;
      //len_max=0;
    }
    int i=0,j=0;
    cout<<1<<" ";
    for(int k=1;k<n;k++){
      i++;
      j++;
      if(vec[i-1]!=1 && (vec[i-1]/(len_max+1))>=1){
        len_max++;
        i--;
      }
      cout<<len_max<<" ";
    }
    cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}