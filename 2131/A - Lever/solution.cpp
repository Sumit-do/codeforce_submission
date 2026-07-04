#include<bits/stdc++.h>
using namespace std;
 
long long MOD = 1e9+7;
 
 
 
 
void solve(){
   int n;
   cin>>n;
   vector<int>a(n),b(n);
   int result=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   for(int i=0;i<n;i++){
    if(a[i]>b[i]){
        result += a[i]-b[i];
    }
   }
   cout<<result+1<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}