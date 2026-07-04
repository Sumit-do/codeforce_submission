#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<int> uniq_l(n),uniq_r(n);
    //int curr_uniq = 0;
    uniq_l[0]=0;
    for(int i=1;i<n;i++){
      if(vec[i]!=vec[i-1]){
        uniq_l[i]=i-1;
      }
      else{
        uniq_l[i]=uniq_l[i-1];
      }
    }
    uniq_r[n-1]=n-1;
    for(int i=(n-2);i>=0;i--){
      if(vec[i]!=vec[i+1]){
        uniq_r[i]=i+1;
      }
      else{
        uniq_r[i]=uniq_r[i+1];
      }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
      int l,r;
      cin>>l>>r;
      if(vec[l-1]!=vec[r-1]){
        cout<<l<<" "<<r<<endl;
        continue;
      }
      else{
        int uni_l = uniq_r[l-1];
        if(uni_l <= (r-1)  && (vec[l-1]!=vec[uni_l])){
          cout<<l<<" "<<uni_l+1<<endl;
        }
        else{
          cout<<-1<<" "<<-1<<endl;
        }
        continue;
      }
      int uni_l = uniq_r[l-1],uni_r=uniq_l[r-1];
     
      if(uni_l>r || uni_r<l || uni_l==uni_r){
        cout<<-1<<" "<<-1<<endl;
      }
      else{
        cout<<min(uni_l,uni_r)+1<<" "<<max(uni_l,uni_r)+1<<endl;
      }
    }
    cout<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}