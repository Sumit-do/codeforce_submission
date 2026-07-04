#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
ll f(int a){
    if(a==0) return 0;
    ll s = a*(a-1);
    //s /= 2;
    return s;
}
 
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> vec(n),vec_x(n),vec_y(n);
    fr(i,n) cin>>vec[i];
    fr(i,n){
        vec_x.push_back(vec[i]%x);
        vec_y.push_back(vec[i]%y);
    }
    sort(vec_x.begin(),vec_x.end());
    sort(vec_y.begin(),vec_y.end());
    map<pair<int,int>,int> mpp;
    ll answer = 0;
    // for x
    fr(i,n){
        int a = vec[i];
        int c = (x-(a%x))%x;
        int d = a%y;
        if(mpp.count({c,d})){
            answer += mpp[{c,d}];
        }
        mpp[{a%x,a%y}]++;
    }
    cout<<answer<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}