#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<0<<endl;
        return;
    }
    //x+2y=n/2
    int n1 =n/2,ans=0;
    for(int x=0;x<=n1;x++){
        //2y=n1-x
        //
        if(n1-x>=0 && (n1-x)%2==0)ans++;
    }
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}