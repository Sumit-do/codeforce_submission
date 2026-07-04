#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
 
 
 
  void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    string s1="L",s2="R";
    bool s11=true,s22=true;
    for(int i=1;i<n;i++){
      int a = vec[i]-vec[i-1];
      if(a!=0 && a!=-1 && a!=1){
        cout<<0<<endl;
        return ;
      }
      if(a==1){
        if(s1.back()!='L') s11= false;
        if(s2.back()!='L') s22=false;
        if(s11){
          s1 += 'L';
        } 
        if(s22){
          s2 += 'L';
        }
      }
      else if(a==-1){
        if(s1.back()!='R') s11= false;
        if(s2.back()!='R') s22=false;
        if(s11){
          s1 += 'R';
        } 
        if(s22){
          s2 += 'R';
        }
      }
      else{
        char ss1s = s1.back(),ss2s=s2.back();
        if(ss1s=='L' && s11) s1 += 'R';
        if(ss1s =='R' && s11) s1+= 'L';
        if(ss2s=='L' && s22 ) s2 += 'R';
        if(ss2s=='R' && s22 ) s2 += 'L';
      }
    }
    if(s1.size()!=n && s2.size()!=n){
      cout<<0<<endl;
      return ;
    }
    int res = 0;
    if(s1.size()==n){
      //couting visible magician
      vector<int> vec_right(n,0),vec_left(n,0);
      for(int i=0;i<n;i++){
        //for left
        if(s1[i]=='L') vec_left[i]++;
        if(s1[n-1-i]=='R') vec_right[n-1-i]++;
      }
      for(int i=1;i<n;i++){
        vec_left[i] += vec_left[i-1];
        vec_right[n-1-i] += vec_right[n-i];
      }
      res++;
      for(int i=0;i<n;i++){
        if(vec_left[i]+vec_right[i]   != vec[i]){
          res--;
          break;
        }
      }
    }
    if(s2.size()==n){
      vector<int> vec_right(n,0),vec_left(n,0);
      for(int i=0;i<n;i++){
        //for left
        if(s2[i]=='L') vec_left[i]++;
        if(s2[n-1-i]=='R') vec_right[n-1-i]++;
      }
      for(int i=1;i<n;i++){
        vec_left[i] += vec_left[i-1];
        vec_right[n-1-i] += vec_right[n-i];
      }
      res++;
       for(int i=0;i<n;i++){
        if(vec_left[i]+vec_right[i]   != vec[i]){
          res--;
          break;
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