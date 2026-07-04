#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    if(k>2) k = 2+(k%2);
    fr(j,k){
        vector<int> freq(n+2,0);
        fr(i,n)freq[vec[i]]++;
        int global_mex = 0;
        while(freq[global_mex]>0)global_mex++;
        if(global_mex==n)return void(cout<<((n-1)*(ll)n)/2<<endl);
        fr(i,n){
            if(freq[vec[i]]==1 && vec[i]<global_mex)continue;
            else vec[i]=global_mex;
        }
    } 
    ll ans =0;
    fr(i,n)ans += vec[i];
    cout<<ans<<endl;
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