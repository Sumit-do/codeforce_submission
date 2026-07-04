#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   ll ans =0;
   int i=0;
   int count=0;
   bool is_one_in_left=false;
   while(i<n){
    count=0;
    while(i<n && s[i]=='1'){
        i++;
        is_one_in_left=true;
    }
    while(i<n && s[i]=='0'){
        i++;
        count++;
    }
    if(i<n && s[i]=='1')count--;
    if(is_one_in_left)count--;
    if(count>=0){
        int a=count/3;
        if((a*3)!=count)a++;
        ans+=a;
    }
   }
   fr(i,n)if(s[i]=='1')ans++;
   cout<<ans<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}