#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    ll ans=0;
    bool flag=false;
    while(i<=j){
        if(vec[i]>=r){
            while(i<=j)ans+=(vec[i++]-r);
        }
        else if(vec[j]<=l){
            while(i<=j)ans+=(l-vec[j--]);
        }
        if(i>j)break;
        if(i==j){
            int y=vec[i];
            if(y<=l){
                ans+=l-y;
            }
            else if(y>=r)ans+=y-r;
        }
        else{
            ans += vec[j]-vec[i];
        }
        i++;
        j--;
    }
    cout<<ans<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}