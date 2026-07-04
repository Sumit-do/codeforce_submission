#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   vector<int> vec(n);
   fr(i,n)cin>>vec[i];
    string s;
    cin>>s;
   vector<int> pre_xor(n);
   pre_xor[0]=vec[0];
   for(int i=1;i<n;i++){
        pre_xor[i]=pre_xor[i-1]^vec[i];
   }
   int ans_0=0,ans_1=0;
   fr(i,n){
    if(s[i]=='0')ans_0^=vec[i];
    else ans_1^=vec[i];
   }
   int q;
   cin>>q;
   fr(i,q){
    int c;
    cin>>c;
    if(c==1){
        int l,r;
        cin>>l>>r;
        int mask=pre_xor[r-1]^pre_xor[l-1];
        mask^=vec[l-1];
        ans_0^=mask;
        ans_1^=mask;
    }
    else{
        int g;
        cin>>g;
        if(g==0)cout<<ans_0<<" ";
        else cout<<ans_1<<" ";
    }
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