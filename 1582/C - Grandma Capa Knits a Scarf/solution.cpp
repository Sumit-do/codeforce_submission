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
    int i=0,j=n-1;
    while(i<=j && s[i]==s[j]){
      i++;
      j--;
    }
    if(i>j){
      cout<<0<<endl;
      return;
    }
    char c1 = s[i],c2=s[j];
    //forwading i
    int nc1=0;
    nc1++;
    int ti=i,tj=j;
    i++;
    while(i<=j && !(s[i]!=s[j] && s[i]!=c1 && s[j]!=c1)){
      if(s[i]!=s[j]) {
        nc1++;
        if(s[i]==c1) i++;
        else{ j--; }
      }
      else{
        i++;
        j--;
      }
    }
    if(i<j) nc1 = INT_MAX;
    //fforwading j
    int nc2=0;
    tj--;
    nc2++;
     while(ti<=tj && !(s[ti]!=s[tj] && s[ti]!=c2 && s[tj]!=c2)){
      if(s[ti]!=s[tj]) {
        nc2++;
        if(s[ti]==c2) ti++;
        else{ tj--; }
      }
      else{
        ti++;
        tj--;
      }
    }
    if(ti<tj) nc2 = INT_MAX;
 
    if(nc1==nc2 && nc1==INT_MAX){
      cout<<-1<<endl;
      return;
    }
    cout<<min(nc1,nc2)<<endl;
}
 
 
int main(){
  int t;
  cin>>t; 
  while(t--) solve();
  return 0;
}