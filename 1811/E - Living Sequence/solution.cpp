#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   ll k;
   cin>>k;
   vector<int> stack(50);
   int top=-1;
    while(k>0){
        stack[++top]=k%9;
        k/=9;
    }
    for(int i=top;i>=0;i--){
        if(stack[i]>=4)cout<<stack[i]+1;
        else cout<<stack[i];
    }
    cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}