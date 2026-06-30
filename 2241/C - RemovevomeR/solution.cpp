#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    bool h01=0, h10=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0'&&s[i+1]=='1') h01=1;
        if(s[i]=='1'&&s[i+1]=='0') h10=1;
    }
    int min=(h01^h10)?2:1;
 
 
    cout<<min<<"
";
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}