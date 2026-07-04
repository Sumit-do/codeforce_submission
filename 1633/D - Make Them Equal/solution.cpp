#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
void solve(vector<int>& ans) {
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> cost(n);
    fr(i,n)cin>>cost[i];
    vector<int> move(n);
    //fr(i,n)move[i]=ans[vec[i]];
    k=min(k,12*n);
    vector<ll> max_n_of_coin(k+1,0);
    fr(i,n){
        for(int j=k;j>=ans[vec[i]];j--){
            if(j-ans[vec[i]]>=0)max_n_of_coin[j]=max(max_n_of_coin[j-ans[vec[i]]]+cost[i],max_n_of_coin[j]);
        }
    }
    cout<<max_n_of_coin[k]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    vector<int> ans(2e3+1,INT_MAX);
    ans[1]=0;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=i;j++){
            ans[(i + (i/j))]=min(ans[(i + (i/j))],ans[i]+1);
        }
    }
    while (t--) solve(ans);
}