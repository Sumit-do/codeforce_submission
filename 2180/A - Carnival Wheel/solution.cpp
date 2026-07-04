#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int l,a,b;
    cin>>l>>a>>b;
    if(b%l==0){
        cout<<a<<endl;
        return;
    }
    int g = __gcd(l,b);
    for(int i=l-1;i>a;i--){
        if((i-a)%g==0){
            cout<<i<<endl;
            return;
        }
    }
    cout<<a<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}