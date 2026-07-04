#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    ll ans = 0;
    for(int i=2;i<n;i++){
            int a=vec[i],b=vec[i-1],c=vec[i-2];
            if(a+b+c<=vec[n-1])continue;
            for(int j=0;j<i-1;j++){
                int curr=vec[j];
                auto it = upper_bound(vec.begin()+j+1,vec.begin()+i,max(a-curr,vec[n-1]-a-curr));
                ans+=(vec.begin()+i-it);
                //cout<<ans<<endl;
            }
    }
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}