#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];
    for(int i=0;i<=600;i++){
        //bool done = false;
        int cn=0;
        fr(j,n){
            bool skip=false;
            fr(k,m){
                int ka = a[j]&b[k];
                bool flag = true;
                for(int bit=9;bit>=0;bit--){
                    if(((ka>>bit)&1)==1 && ((i>>bit)&1)==0)flag = false;
                }
                //skip=flag;
                if(flag){
                    skip=true;
                    continue;
                }
            }
            if(!skip)break;
            //done = true;
            //return void(cout<<i<<endl);
            cn++;
        }
        if(cn==n)return void(cout<<i<<endl);
    }
}
 
int main() {
    int t=1;
    //cin >> t;
    while (t--) solve();
    return 0;
}