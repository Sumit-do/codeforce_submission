#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n;
    cin>>n;
    if(n%2==1){
        fr(i,n)cout<<1<<" ";
        cout<<endl;
        return;
    }  
    cout<<1<<" "<<3<<endl;
    fr(i,n-2)cout<<2<<" ";
    cout<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}