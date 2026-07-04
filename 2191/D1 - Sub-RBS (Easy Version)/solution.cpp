#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   bool flag = false;
   int nn=0;
   for(int i=0;i<n-1;i++){
    string s1=s.substr(i,2);
    if(s1==")(")nn++;
   }
   if(nn>1)flag=true;
   for(int i=0;i<n-3;i++){
    string s1=s.substr(i,4);
    if(s1=="()((")flag = true;
    if(s1=="))((")flag=true;
   }
   if(flag)return void(cout<<n-2<<endl);
   cout<<-1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}