#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> ch(n+1);
    for(int i=2;i<=n;i++){
        int p; cin>>p;
        ch[p].push_back(i);
    }
    vector<long long> dp(n+1,0);
    vector<int> h(n+1,0);
    for(int i=n;i>=1;i--){
        long long s=0;
        int m1=0,m2=0;
        for(int c:ch[i]){
            s+=dp[c];
            if(h[c]>m1){
                m2=m1;
                m1=h[c];
            }
            else if(h[c]>m2){
                m2=h[c];
            }
        }
        h[i]=m1+1;
        dp[i]=s+1+m2;
    }
    cout<<dp[1]<<"
";
}
 
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}