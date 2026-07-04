#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    map<int,int> mpp;
    fr(i,n){
        mpp[a[i]]=b[i];
    }
    for(int i=0;i<n;i++){
        cout<<(i+1)<<' ';
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<mpp[i+1]<<' ';
    }
    cout<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}