#include<bits/stdc++.h>
using namespace std;
 
int q(int i, int j, int len, int b, int c, vector<vector<int>>& dp, vector<int>& vec){
    if(i == j) return 0;
    int mid = i + (j - i) / 2;
    int leftXor = dp[i][len-1];
    int rightXor = dp[mid+1][len-1];
    if(mid < b-1){
        if(leftXor >= (rightXor ^ c ^ vec[b-1]))
            return (1<<(len-1)) + q(mid+1, j, len-1, b, c, dp, vec);
        return q(mid+1, j, len-1, b, c, dp, vec);
    }
    if((leftXor ^ c ^ vec[b-1]) < rightXor)
        return (1<<(len-1)) + q(i, mid, len-1, b, c, dp, vec);
    return q(i, mid, len-1, b, c, dp, vec);
}
void f(int i,int len,vector<vector<int>> & dp,vector<int> & vec){
    int j=i + (1<<len) -1;
    int mid=i + (j-i)/2;
    if(i==j){
        dp[i][0]=vec[i];
        return ;
    }
    f(i,len-1,dp,vec);
    f(mid+1,len-1,dp,vec);
    dp[i][len]=dp[i][len-1]^dp[mid+1][len-1];
}
 
void solve(){
    int n,qq;cin>>n>>qq;
    vector<int> vec(1<<n);
    vector<vector<int>> dp((1<<n),vector<int> (n+1));
    for(int i=0;i<(1<<n);i++)cin>>vec[i];
    f(0,(n),dp,vec);
    for(int i=0;i<qq;i++){
        int b,c;
        cin>>b>>c;
        int ans = q(0,(1<<n)-1,n,b,c,dp,vec);
        cout<<ans<<endl;
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}