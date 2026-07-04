#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];
    int j=0;
    vector<int> left_subset(n+1);
    left_subset[0]=-1;
    for(int i=1;i<=n;i++){
        if(j<m && a[i-1]>=b[j]){
            left_subset[i]=j;
            j++;
        }
        else left_subset[i]=left_subset[i-1];
    }
    j=m-1;
    vector<int> right_subset(n+1);
    right_subset[n]=m;
    for(int i=n-1;i>=0;i--){
        if(j>=0 && a[i]>=b[j]){
            right_subset[i]=j;
            j--;
        }
        else right_subset[i]=right_subset[i+1];
    }
    //fr(i,n+1)cout<<left_subset[i]<<" ";
    //cout<<endl;
    //fr(i,n+1)cout<<right_subset[i]<<" ";
    //cout<<endl;
    int ans = INT32_MAX;
    fr(i,n+1){
        if(left_subset[i]>=right_subset[i]){
            //cout<<left_subset[i]<<" "<<right_subset[i]<<" "<<i<<endl;
            return void(cout<<0<<endl);
            //cout<<left_subset[i]<<" "<<right_subset[i]<<endl;
        }
        if(left_subset[i]+1 == right_subset[i]){
            //cout<<left_subset[i]<<" "<<right_subset[i]<<" "<<i<<endl;
            return void(cout<<0<<endl);
            
        }
        //if(left_subset[i]<right_subset[i]){
        int beech_me = right_subset[i]-left_subset[i]-1;
        if(beech_me==1)ans = min(ans,b[left_subset[i]+1]);
        //}
    }
    if(ans==INT32_MAX)return void(cout<<-1<<endl);
    cout<<ans<<endl;
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