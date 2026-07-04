#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
int g(int x){
    if(x<0)return -1*x;
    return x;
}
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    if(vec[0]==-1 || vec[n-1]==-1){
        if(vec[0]==-1 && vec[n-1]!=-1)vec[0]=vec[n-1];
        else if(vec[0]!=-1 && vec[n-1]==-1)vec[n-1]=vec[0];
        else {
            vec[0]=0;
            vec[n-1]=0;
        }
    }
    cout<<g(vec[n-1]-vec[0])<<endl;
    fr(i,n){
        if(vec[i]==-1)cout<<0<<" ";
        else cout<<vec[i]<<" ";
    }
    cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}