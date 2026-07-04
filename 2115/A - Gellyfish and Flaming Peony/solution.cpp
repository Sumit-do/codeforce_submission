#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
int f(int x){
    if(x==0)return 0;
    return 1;
}
 
vector<vector<int>> mat(5001,vector<int> (5001));
 
void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    //map<int,int> mpp;
    vector<int> mpp(5001,0);
    fr(i,n){
        cin>>vec[i];
        mpp[vec[i]]++;
    }
    if(n==1)return void(cout<<0<<endl);
 
    vector<int> dp(5001,INT32_MAX);
    fr(i,n)dp[vec[i]]=0;
    for(int i=5000;i>=1;i--){
        if(dp[i]==INT32_MAX)continue;
        fr(j,n){
            dp[mat[i][vec[j]]]=min(dp[mat[i][vec[j]]],dp[i]+1);
        }
    }
    int gccd=__gcd(vec[0],vec[1]);
    fr(i,n)gccd=__gcd(gccd,vec[i]);
    cout<<dp[gccd]+n-mpp[gccd]-f(dp[gccd])<<endl;
}
 
int main(){
    int t;
    cin >> t;
    for(int i=1;i<=5000;i++){
        for(int j=1;j<=5000;j++){
            mat[i][j]=__gcd(i,j);
        }
    }
    while (t--) {
        solve();
    }
    return 0;
}