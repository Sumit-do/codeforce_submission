#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
 
void solve() {
    int n;
    cin>>n;
    vector<ll> vec1(n),vec2(n);
    fr(i,n) cin>>vec1[i];
    fr(i,n) cin>>vec2[i];
    vector<ll> diff(n);
    fr(i,n) diff[i]=vec2[i]-vec1[i];
    sort(diff.begin(),diff.end());
    int i=0,j=n-1;
    int res =0;
    while(i<j){
        while((i<j) && (diff[i]+diff[j])<0) i++;
        if(i<j) {
            res++;
            i++;
            j--;
        }
    }
    cout<<res<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}