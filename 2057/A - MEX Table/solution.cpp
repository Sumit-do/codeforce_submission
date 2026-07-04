#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n,m;
    cin>>n>>m;
    cout<<max(m,n)+1<<endl;
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