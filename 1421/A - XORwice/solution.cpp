#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long x,y;
    cin>>x>>y;
    long long d=x|y;
    cout<<(x^d)+(y^d)<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}