#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum +=vec[i];
    }
    if(sum==m)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
 
    return 0;
}