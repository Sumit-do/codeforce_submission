#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    map<int,int> mpp;
    fr(i,n){
        cin>>vec[i];
        mpp[vec[i]]++;
    }
    vector<int> yes;
    for(auto it:mpp){
        yes.push_back(it.second);
    }
    sort(yes.begin(),yes.end());
    int m=0,i=0;
    while(k>0 && i<yes.size()){
        if(k>=yes[i]){
            k-=yes[i];
            m++;
        }
        i++;
        //cout<<i<<endl;
    }
    if(mpp.size()-m == 0)return void(cout<<1<<endl);
    cout<<mpp.size()-m<<endl;
}
 
int main() {
    fast_io; 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}