#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
#include <bits/stdc++.h>
using namespace std;
 
 
 
 
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   bool flag = true;
   int coup=0;
   for(auto it : s){
    if(it=='0') {flag = false; coup++;}
   }
   if( coup==1){
    cout<<"BOB
";
    return ;
   }
   if(flag){
    cout<<"DRAW
";
    return ;
   }
   int l = s.size();
   //count non center zero in the string
   int con=0;
   for(int i=0;i<l;i++){
    if(s[i]=='0' && !(l%2==1 && i==(l/2))) con++;
   }
   con /= 2;
   if(l%2==1 && s[l/2]=='0'){
      cout<<"ALICE
";
      return;
   }
   /*if(con%2==0){
    cout<<"DRAW
";
    return ;
   }*/
   cout<<"BOB
";
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}