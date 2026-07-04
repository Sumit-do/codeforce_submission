#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   fr(i,n)cin>>vec[i];
   vector<int> valid=vec;
    sort(valid.begin(),valid.end());
    vector<ll> to_check;
    fr(i,n){
        if(valid[i]!=vec[i])to_check.push_back(vec[i]);
    }
    sort(to_check.begin(),to_check.end());
    ll i=1,j=1e10;
    ll ans =-1;
    if(to_check.size()==0){
        return void(cout<<-1<<endl);
    }
    while(i<=j){
        ll mid = i + (j-i)/2;
        ll mi=valid[0],ma=valid[n-1];
        bool flag = true;
        fr(i,to_check.size()){
            if(!(to_check[i]-mi >=mid || ma-to_check[i]>=mid))flag = false;
        }
        if(flag){
            ans = mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}