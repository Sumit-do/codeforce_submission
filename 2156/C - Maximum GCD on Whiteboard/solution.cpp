#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//typedef long long ll;
 
 
 
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    vector<ll> prefix(n+1,0);
    map<int,int> mpp;
    fr(i,n){
        int x = vec[i];
        mpp[x]++;
        if(x%2==0)mpp[x/2]++;
        if(x%3==0)mpp[x/3]++;
        if((x/4)>=1){
            prefix[x/4]++;
        }
    }
    for(int i=n;i>=1;i--){
        prefix[i-1]+=prefix[i];
    }
    for(int i=1;i<=n;i++){
        mpp[i]+=prefix[i];
    }
    int parr=n-k;
    int maxx=1;
    for(int i=1;i<=n;i++){
        if(mpp[i]>=parr)maxx=i;
    }
    cout<<maxx<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}