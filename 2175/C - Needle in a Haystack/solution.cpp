#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   string s,t;
   cin>>s>>t;
   vector<int> f1(27,0),f2(27,0);
   for(auto it:s){
    f1[it-'a']++;
   }
   for(auto it:t){
    f2[it-'a']++;
   }
   /*fr(i,27)cout<<f1[i]<<" ";
   cout<<endl;
   fr(i,27)cout<<f2[i]<<" ";
   cout<<endl;*/
   for(int i=0;i<=26;i++){
    f2[i]-=f1[i];
    if(f2[i]<0)return void(cout<<"Impossible
");
   }
   /*fr(i,27)cout<<f1[i]<<" ";
   cout<<endl;
   fr(i,27)cout<<f2[i]<<" ";
   cout<<endl;*/
   char curr='a';
   for(int i=0;i<s.size();i++){
    char itt=s[i];
    if(curr<itt){
        int a1=curr-'a',a2=itt-'a';
        curr=itt;
        for(int j=a1;j<a2;j++){
            int o=f2[j];
            fr(kl,o)cout<<char(j+'a');
            f2[j]=0;
        }
    }
    cout<<itt;
   }
   for(int i=0;i<27;i++){
    if(f2[i]){
        fr(kk,f2[i])cout<<char('a'+i);
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