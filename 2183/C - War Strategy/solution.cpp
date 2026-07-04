#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
 
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    int left=k-1;
    int right=n-k;
    int ans =INT32_MIN;
    for(int x=n-1;x>=1;x--){
        if(x<=2*min(left,right)){
            if(x%2==0){
                //y-1 + y + y y=x/2
                //ans = max(ans,3*(x/2)-1);
                if(m>=3*(x/2)-1)return void(cout<<x+1<<endl);
            }
            else{
                // 3*y -2 y-1 + y + y-1//y = x/2+1
                //ans = max(ans,3*((x/2)+1)-2);
                if(m>=3*((x/2)+1)-2)return void(cout<<x+1<<endl);
            }
        }
        else{
            // ymin+need-1 + ymin+need + ymin
            //3*ymin + 2*need -1
            if(m>=(3*min(left,right) + 2*(x-2*min(left,right))-1))return void(cout<<x+1<<endl);
        }
    }
    cout<<1<<endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}