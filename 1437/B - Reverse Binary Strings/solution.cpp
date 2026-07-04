// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int m=0,p=0;
   fr(i,n-1){
       if((s[i]-'0')==1 && s[i]==s[i+1]) m++;
   }
   fr(i,n-1){
       if((s[i]-'0')==0 && s[i]==s[i+1]) p++;
   }
   cout<<max(m,p)<<endl;
}
 
int main() {
    int t;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}