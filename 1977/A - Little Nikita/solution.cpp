#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    if(n<m)return void(cout<<"NO
");
    if((n-m)%2==0)return void(cout<<"YES
");
    cout<<"NO
";   
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}