#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    fr(i,n)cin>>vec[i];
    vector<int> pre_small(n),post_large(n);
    pre_small[0]=vec[0];
    post_large[n-1]=vec[n-1];
    for(int i=1;i<=n-1;i++){
        pre_small[i]=min(pre_small[i-1],vec[i]);
    }
    for(int i=n-2;i>=0;i--){
        post_large[i]=max(post_large[i+1],vec[i]);
    }
    for(int i=1;i<n;i++){
        int a = post_large[i];
        if(pre_small[i-1]>a){
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // int l=1,r=2e5;
    //cin>>l>>r;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}