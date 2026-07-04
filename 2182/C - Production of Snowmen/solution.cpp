#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    fr(i,n)cin>>c[i];
    ll ans =0,n1=0,n2=0;
    for(int j=0;j<n;j++){
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]>=b[(i+j)%n]){
                flag = false;
                break;
            }
        }
        if(flag)n1++;
    }
    for(int j=0;j<n;j++){
        bool flag = true;
        for(int i=0;i<n;i++){
            if(b[i]>=c[(i+j)%n]){
                flag = false;
                break;
            }
        }
        if(flag)n2++;
    }
    ans = n1*n2*n;
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}