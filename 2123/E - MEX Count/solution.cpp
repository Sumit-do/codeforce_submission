#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
//set<long long> seen;
///vector<bool> is_prime(1e7+1,true);
void solve() {
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> freq(n+1,0);
    fr(i,n){
        cin>>vec[i];
        freq[vec[i]]++;
    }
    int mex = 0;
    while(freq[mex])mex++;
    vector<int> ans(n+2,0);
    for(int i=mex;i>=0;i--){
        ans[freq[i]]+=1;
        ans[n-(i)+1]-=1;
    }
    for(int i=1;i<=n;i++)ans[i]+=ans[i-1];
    ll as = 0;
    fr(i,n+1)cout<<ans[i]<<" ";
    //cout<<as<<endl;
    cout<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}