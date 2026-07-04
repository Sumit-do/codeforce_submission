#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[j][i];
        }
    }
    for(int i=0;i<m;i++) sort(vec[i].begin(),vec[i].end());
    long long res=0;
    for(int i=0;i<m;i++){
        vector<long long> sum(n,0);
        sum[n-1]=vec[i][n-1];
        for(int k=n-2;k>=0;k--) sum[k] = vec[i][k] + sum[k+1];
        for(int k=0;k<(n);k++){
            res += (sum[k]-((long long)vec[i][k]*(n-k)));
        }
    }
    cout<<res<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}