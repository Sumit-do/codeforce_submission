#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    int a=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            break;
        }
    }  
        cout<<(ll)n + (ll)a + (ll)(k-1)*2<<endl;    
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}