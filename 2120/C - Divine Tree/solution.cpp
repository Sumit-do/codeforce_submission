#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
//set<long long> seen;
///vector<bool> is_prime(1e7+1,true);
vector<ll> ans;
void fub(ll n,ll m){
    if(2*n<=m){
        //cout<<n<<" ";
        ans.push_back(n);
        fub(n-1,m-n);
    }
    else{
        int steps = m-n;
        int i=0;
        for(i;i<steps;i++){
            //cout<<i+2<<" ";
            ans.push_back(i+2);
        }
        ans.push_back(1);
        //cout<<1<<" ";
        for(int j=i+2;j<=n;j++)ans.push_back(j);//cout<<j<<" ";
        //cout<<endl;
    }
}
void solve() {
    ans.clear();
    ll n,m;
    cin>>n>>m;
    if(m<n || (ll)n*(ll)(n+1)/2 < m)return void(cout<<-1<<endl);
    if(n==m)cout<<1<<endl;
    else if(2*n>m)cout<<2<<endl;
    else cout<<n<<endl;
    fub(n,m);
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
    //cout<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}