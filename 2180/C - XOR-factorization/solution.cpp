#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
vector<int> adj[(int)2e5+1];
bool visited[(int)2e5+1]={false};
 
int g(int l){
    if(l%2==0)return l;
    return l-1;
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    if(k%2==1){
        fr(i,k)cout<<n<<" ";
        cout<<endl;
        return;
    }
    int l=0;
    vector<int> ans(k+1,0);
    for(int i=29;i>=0;i--){
        int a = (n>>i)&1;
        for(int j=1;j<=k;j++){
            if(a){
                if((l<k) && j!=(l+1))ans[j]+=(1<<i);
                if(l>=k && j!=k)ans[j]+=(1<<i);
            }
            else{
                if(j<=g(l))ans[j]+=(1<<i);;
            }
        }
        if(a && (l+1)<=k )l++;
    }
    fr(i,k)cout<<ans[i+1]<<" ";
    cout<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}