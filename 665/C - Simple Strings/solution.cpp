#include<bits/stdc++.h>
using namespace std;
 
// Using standard C++ long double. This is the maximum precision without external libraries.
#define FLOAT_TYPE long double
 
// Use the standard long long type for integers
#define ll long long
 
void solve(){
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
      if(i>0 && s[i]==s[i-1]){
        if(i!=(s.size()-1)){
          char a1 = s[i-1],a2=s[i+1];
          char yy = 'a';
          while(yy<='z'){
            if(yy==a1 || yy==a2) yy++;
            else break;
          }
          s[i]=yy;
        }
        else{
          char a1 = s[i-1];
          char yy = 'a';
          while(yy<='z'){
            if(yy==a1) yy++;
            else break;
          }
          s[i]=yy;
        }
      }
      i++;
    }
    cout<<s<<endl;
}
 
// ... (main function remains the same)
int main(){
    // Use cin.tie(0)->sync_with_stdio(0); if you need extremely fast I/O
    int t=1;
    //cin>>t; 
    while(t--) solve();
    return 0;
}