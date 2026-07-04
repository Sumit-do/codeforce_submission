#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int count_open=0,count_close=0;
    int minn=n-1,prev=INT_MAX; 
    for(int i=0;i<n;i++){
        if(s[i]=='(') count_open++;
        else count_close++;
        
        int balance = count_open - count_close;
        
        if(balance < prev){
            minn = i;
            prev = balance;
        }
    }
    
    string ans(n,'0');
    
    
    for(int i = 0; i < minn && k > 0; i++) {
        if(s[i] == '(') {
            k--;
            ans[i] = '1';
        }
    }
    
    for(int i = n; i >= minn && k > 0; i--) {
        if(s[i] == ')') {
            k--;
            ans[i] = '1';
        }
    }
    cout<<ans<<"
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}