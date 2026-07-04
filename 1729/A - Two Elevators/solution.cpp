#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    int part1=a;
    int part2=0;
    if(b>c){
        part2=b;
    }
    else{
        part2=2*c-b;
    }
    if(part1==part2)return void(cout<<3<<endl);
    if(part1>part2)return void(cout<<2<<endl);
    return void(cout<<1<<endl);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}