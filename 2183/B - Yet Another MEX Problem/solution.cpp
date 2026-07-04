#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> fq(n+1,0);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        fq[a[i]]++;
    }
    int mexx=0;
    while(fq[mexx])mexx++;
    cout<<min(mexx,k-1)<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}