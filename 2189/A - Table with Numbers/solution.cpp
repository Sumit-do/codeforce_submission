#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n,h,l;
    cin>>n>>h>>l;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    sort(vec.begin(),vec.end());
    int mi = min(h,l);
    int ma=max(h,l);
    auto it=upper_bound(vec.begin(),vec.end(),mi);
    auto it1=upper_bound(vec.begin(),vec.end(),ma);
    if(it==vec.begin() || it1==vec.begin()){
        cout<<0<<endl;
        return;
    }
    int l1=it-vec.begin();
    int l2=it1-vec.begin();
    l2=l2-l1;
    if(l2>l1){
        cout<<l1<<endl;
        return;
    }
    cout<<(l1+l2)/2<<endl;
}
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}