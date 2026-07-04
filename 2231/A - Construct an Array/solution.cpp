#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ii=1;
    for(int i=1;i<=n;i++){
        cout<<ii<<" ";
        ii+=2;
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}