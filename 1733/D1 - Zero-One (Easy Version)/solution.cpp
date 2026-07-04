#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    string a ,b;
    cin>>a>>b;
    int freq_xor=0,freq_connected_comp=0;
    fr(i,n){
        if(a[i]!=b[i]){
            freq_xor++;
            if(i<(n-1) && a[i+1]!=b[i+1])freq_connected_comp++;
        }
    }
    //cout<<freq_xor<<" "<<freq_connected_comp<<" "<<endl;
    if(freq_xor%2==1)return void(cout<<-1<<endl);
    if(freq_xor==2 && freq_connected_comp==1) return void(cout<<min((ll)x,2*(ll)y)<<endl);
    cout<<((ll)freq_xor/2)*(ll)y<<endl;
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