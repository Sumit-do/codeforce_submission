#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
ll poww(int x){
    ll ans = 1;
    while(x--)ans*=3;
    return ans;
}
 
ll g(int x){
    if(x==0)return 3;
    if(x==1)return 10;
    ll a = poww(x-1)*(3*3 + x);
    return a;
}
 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    ll ans = 0;
    int i=0;
    int count=0;
    vector<int> base_3(20,0);
    while(n>0){
        int mult = n%3;
        count += mult;
        //ans += mult*g(i);
        n/=3;
        base_3[i]=mult;
        i++;
    }
    //if(count==k)
    if(count>k)return void(cout<<-1<<endl);
    //fr(i,20)cout<<base_3[i]<<" ";
    //cout<<endl;
    for(int j=19;j>=0;j--){
        if(count<k){
            int curr_freq=base_3[j];
            int left = k-count;
            int can_move = left/2;
            //cout<<left<<" "<<can_move<<endl;
            if(j!=0){
                can_move=min(can_move,base_3[j]);
                base_3[j]-=can_move;
                base_3[j-1]+=3*can_move;
                count+=2*can_move;
            }
        }
    }
    //fr(j,20)cout<<base_3[j]<<" ";
    //cout<<endl;
    for(int j=19;j>=0;j--){
        if(base_3[j]!=0)ans+=base_3[j]*g(j);
    }
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