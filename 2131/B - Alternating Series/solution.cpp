#include<bits/stdc++.h>
using namespace std;
 
long long MOD = 1e9+7;
 
 
 
 
void solve(){
   int n;
   cin>>n;
   if(n==2){
    cout<<-1<<" "<<2<<endl;
    return ;
   }
   else{
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<-1<<" ";
        }
        else if (i%2==1 && i<(n-1)){
            cout<<3<<" ";
        }
        else if(i==n-1 && n%2==0){
            cout<<2<<" ";
        }
    }
    cout<<endl;
   }
   
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}