#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
    int n,k;
    cin>>n>>k;
    if((k>(2*n-1)) || k<n) return void(cout<<"No
");
    cout<<"Yes
";
    vector<int> vec(2*n);
    for(int i=0;i<2*n;i++){
        vec[i]=(i)/2 +1 ;
    }
    int i=1;
    for(int j=0;j<(k-n);j++){
        swap(vec[i],vec[i+1]);
        i+=2;
    }
    for(int i=0;i<2*n;i++)cout<<vec[i]<<" ";
    cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}