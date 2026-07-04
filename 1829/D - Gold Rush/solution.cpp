#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void check(int m,int n,bool & flag){
    if(n<m)return;
    if(n==m)flag=true;
    if(n%3==0){
        check(m,n/3,flag);
        check(m,(n/3)*2,flag);
    }
}
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    bool flag = false;
    check(m,n,flag);
    if(flag)return void(cout<<"YES
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