#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        int x=0;
        for(int i=31;i>=0;i--){
        if(((b>>i)&1)!=(((a>>i)&1)))x+=(1<<i);
        }
        int i=31;
        while(i>=0 && ((a>>i)&1)==0)i--;
        if(((a>>i)&1)!=((b>>i)&1)){
            x-=(1<<i);
            cout<<2<<endl;
            cout<<x<<" "<<(1<<i)<<endl;
            return;
        }
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    int i=31;
    while(i>=0 && ((b>>i)&1)==0)i--;
    if(((b>>i)&1)!=(((a>>i)&1)))return void(cout<<-1<<endl);
    //cout<<"YES
";
    
    int x=0;
    for(int i=31;i>=0;i--){
        if(((b>>i)&1)!=(((a>>i)&1)))x+=(1<<i);
    }
    cout<<1<<endl;
    cout<<x<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}