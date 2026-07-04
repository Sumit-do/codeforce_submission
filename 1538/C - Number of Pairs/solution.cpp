#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    sort(vec.begin(),vec.end());
    ll ans =0;
    fr(i,n){
        int curr=vec[i];
        //cout<<curr<<endl;
        //if(curr>=l){
            int to_find = l-curr;
            //if(to_find<curr)continue;
            int to_max=r-curr;
            auto it1=lower_bound(vec.begin()+i+1,vec.end(),to_find);
            auto it2=upper_bound(vec.begin()+i+1,vec.end(),to_max);
            if(it2!=vec.begin())it2--;
            else continue;
            if(it1==vec.end())continue;
            //cout<<(*it1)<<" "<<(*it2)<<endl;
            if((*it2)<=to_max && (*it1)>=to_find){
                ans += it2-it1+1;
            }
        //}
    }
    cout<<ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}