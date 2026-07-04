#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if(k>=n)return void(cout<<n<<endl);
    int left = n;
    int ans = 0;
    //int curr=0;
    for(int i=0;i<31;i++){
        for(int j=0;j<k;j++){
            if((1<<i)<=left){
                ans++;
                left-=(1<<i);
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}