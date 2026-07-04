#include<bits/stdc++.h>
using namespace std;
bool check(int k,int mask){
    for(int i=1;i<=k;i++){
        if(!((mask>>(i-1))&1))return false;
    }
    return true;
}
 //mask = mask|(1<<(x-1)); 
 
void solve(){
    int n,k;cin>>n;cin>>k;
    string s;
    cin>>s;
    vector<int> dp(n+1);
    dp[n]=0;
    int mask = 0;
    if(k==1 )dp[n-1]=1;
    else{
        mask = mask|(1<<(s[n-1]-'a'));
        dp[n-1]=0;
    }
    for(int i=n-2;i>=0;i--){
        mask = mask|(1<<(s[i]-'a'));
        if(check(k,mask)){
            dp[i]=dp[i+1]+1;
            mask=0;
        }
        else{
            dp[i]=dp[i+1];
        }
    }
    vector<vector<int>> dp_next(n,vector<int> (k,n));
    for(int i=n-2;i>=0;i--){
        dp_next[i]=dp_next[i+1];
        dp_next[i][s[i+1]-'a']=i+1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string s1;
        cin>>s1;
        int j=0,curr=0;
        //int ans=0;
        while(j!=n){
            if(s[j]==s1[curr]){
                curr++;
                if(curr==s1.size()){
                    cout<<dp[j+1]+1<<endl;
                    break;
                }
                j=dp_next[j][s1[curr]-'a'];
            }
            else{
                j=dp_next[j][s1[curr]-'a'];
            }
            if(j==n){
                cout<<0<<endl;
                break;
            }
        }
    }
}
 
int main(){
    int t=1;//cin>>t;
    while(t--)solve();
    return 0;
}