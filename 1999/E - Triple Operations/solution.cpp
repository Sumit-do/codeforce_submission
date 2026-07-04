#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(vector<int>&vec,vector<ll>&vec1){
    int l,r;
    cin>>l>>r;
    
    ll ans = vec[l];
   ans += vec1[r]-vec1[l]+vec[l];
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l=1,r=2e5;
    //cin>>l>>r;
    vector<int> vec(2e5+1);
    vector<ll> vec1(2e5+1);
    vec1[0]=0;
    for(int i=1;i<=2e5;i++){
        int a=3,k=i,ans=0;
        while(k>0){
            //cout<<"k==="<<k<<endl;
            k/=a;
            ans++;
            //a*=3;
        }
        vec[i]=ans;
        vec1[i]=vec1[i-1]+vec[i];
        //cout<<ans<<endl;
        //cout<<ans<<endl;
    }
    
 
    int t;
    cin >> t;
    while(t--) {
        solve(vec,vec1);
    }
    return 0;
}