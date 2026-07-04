#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    
    vector<int> next_a(n+2,n), next_b(n+2,n), dp(n+2,n-1);
    long long ans=0;
    
    for(int i=n-1;i>=0;i--){
        next_a[a[i]]=i;
        next_b[b[i]]=i;
        
        if(a[i]==b[i]){
            int xa=next_a[a[i]+1];
            int xb=next_b[b[i]+1];
            dp[i]=(xa==xb)?dp[xa]:min(xa,xb)-1;
        }
        
        int a_1=next_a[1], b_1=next_b[1];
        ans+=(a_1==b_1)?(dp[a_1]-i+1):(min(a_1,b_1)-i);
    }
    cout<<ans<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int multTestQ;
    cin>>multTestQ;
    while(multTestQ--)solve();
    return 0;
}