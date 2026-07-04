#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
 
int f(int n){
    int ans =0;
    while(n>0){
        n/=2;
        ans++;
    }
    return ans;
}
 
void g(int n , vector<int> & vec){
    if(n<0)return;
    if(n<4){
        if(n==0){
            vec[0]=0;
        }
        if(n==1){
            vec[0]=1;
            vec[1]=0;
        }
        if(n==2){
            vec[0]=0;
            vec[1]=2;
            vec[2]=1;
        }
        if(n==3){
            vec[0]=3;
            vec[1]=2;
            vec[2]=1;
            vec[3]=0;
        }
        return;
    }
    int len = f(n);
    int n_dash = (1<<len)-1;
    int j=0;
    for(int i = n_dash-n;i<=n;i++){
        vec[i]=n-j;
        j++;
    }
    g(n_dash-n-1,vec);
}
 
 
void solve(){
    int l,r;
    cin>>l>>r;
    int n=r-l+1;
    vector<int> vec(n);
    g(r,vec);
    ll ans =0;
    fr(i,r+1){
        ans += vec[i]|i;
    }
    cout<<ans<<endl;
    for(int i=0;i<=r;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
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