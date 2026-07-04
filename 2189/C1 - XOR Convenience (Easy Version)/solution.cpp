#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   if(n%2==1){
    cout<<n-1<<" ";
    for(int i=2;i<=n-1;i++){
        if(i%2==0)cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<1<<endl;
   }
   else{
    cout<<n<<" ";
    for(int i=2;i<=n-1;i++){
        if(i%2==0)cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<1<<endl;
   }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}