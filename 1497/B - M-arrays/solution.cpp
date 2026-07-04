#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
     int n,m;
     cin>>n>>m;
     vector<int> vec(n+1);
     map<int,int> mpp;
     for(int i=0;i<n;i++){
      cin>>vec[i];
      mpp[vec[i]%m]++;
     }
     int c=0;
     for(auto it : mpp){
      if(it.second==0) continue;
      int a = it.first;
      int b = m - a;
      if(a==0){
         c++;
         mpp[a]=0;
         continue;
      }
      if( a == m/2 && m%2 == 0){
         c++;
         mpp[a]=0;
         continue;
      }
      if(mpp.count(b)!=0 ){
         if(mpp[b]==mpp[a]){
            c++;
            //cout<<"same a and b "<<c<<endl;
         }
         else{
            c++;
            //cout<<" above y "<<c<<endl;
            int y = min(mpp[b],mpp[a]);
            int g = max(mpp[a],mpp[b]);
            g -= (y+1);
            c += g ;
            //cout<<"diff a and b "<<c<<endl;
         }
         mpp[a]=0;
         mpp[b]=0;
      }
      else{
         c += mpp[a];
         //cout<<"no match of a  "<<c<<endl;
         mpp[a]=0;
      }
     }
     cout<<c<<endl;
 
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}