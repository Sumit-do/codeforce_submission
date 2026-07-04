#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
void solve(vector<ll> & dp){
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
//lulllll hoe cya???
int f(int x){
    int i=0,j=2024;
    int ans =1;
    while(i<=j){
        ll mid = i+(j-i)/2;
        ll sum = (1+mid)*(mid)/2;
        if(sum>=x){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> adj_l(1e7+1,0);
    vector<int> adj_r(1e7+1,0);
    vector<ll> dp(1e7+1,0);
    for(int i=1;i<=2047276;i++){
        int row = f(i);
        if(row!=2023){
            int cl=i+row,cr=i+row+1;
            adj_r[cl]=i;
            adj_l[cr]=i;
        }
        dp[i]=dp[adj_l[i]]+dp[adj_r[i]]-dp[adj_l[adj_r[i]]]+(ll)(i)*(i);
    }
    //fr(i,1e6+1)cout<<dp[i]<<" ";
    //cout<<endl;
    while(t--)solve(dp);
    return 0;
}