#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<long long> a(n), b(n);
    for(long long &x: a) cin>>x;
    for(long long &x: b) cin>>x;
    long long life=0;
    bool iswf=1;
    for(int i=0;i<n;i++){
        life+=b[i]-a[i];
        if(life<0){iswf=0;break;}
    }
    cout<<(iswf?"YES
":"NO
");
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}