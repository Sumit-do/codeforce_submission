#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
 
void solve() {
   ll n,q;
   cin>>n>>q;
    vector<ll> vec(n);
    long long sum=0;
    fr(i,n) cin>>vec[i];
    fr(i,n) sum += vec[i];
    bool has_glob = false;
    ll recent_glob=0;
    map<long long ,long long> mod;
    fr(i,q){
        ll c;
        cin>>c;
        if(c==1){
            ll i,x;
            cin>>i>>x;
            i--;
            if(has_glob){
                if(mod.count(i)==0){
                    sum += x;
                    sum -= recent_glob;
                    cout<<sum<<endl;
                    mod[i]=x;
                }
                else{
                    sum += x;
                    sum -= mod[i];
                    mod[i]=x;
                    cout<<sum<<endl;
                }
            }
            else{
                sum += x;
                sum -= vec[i];
                vec[i]=x;
                cout<<sum<<endl;
            }
        }
        else{
            ll x;
            cin>>x;
            has_glob=true;
            sum  = n*x;
            recent_glob=x;
            mod.clear();
            cout<<sum<<endl;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}