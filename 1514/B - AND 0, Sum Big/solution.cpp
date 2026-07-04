#include<bits/stdc++.h>
using namespace std;
 
long long MOD = 1e9+7;
 
long long f(int n,int k){
    long long result=1;
    for(int i=0;i<k;i++){
        result = (result*n)%MOD;
    }
    return result;
}
 
 
void solve(){
   int n,k;
   cin>>n>>k;
   cout<<(f(n,k))<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}