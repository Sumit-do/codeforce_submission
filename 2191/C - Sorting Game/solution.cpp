#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   //if sorted bob
   //not alice then
   bool flag = true;
   for(int i=1;i<n;i++){
    if(s[i]<s[i-1])flag=false;
   }
   if(flag)return void(cout<<"Bob
");
   vector<int> ans;
   int i=0,j=n-1;
   while(i<=j){
    if(s[i]=='1' && s[j]=='0'){
        ans.push_back(i);
        ans.push_back(j);
        i++;
        j--;
    }
    if(s[i]=='0')i++;
    if(s[j]=='1')j--;
   }
   sort(ans.begin(),ans.end());
   cout<<"Alice
";
   cout<<ans.size()<<endl;
   for(auto it:ans)cout<<it+1<<" ";
   cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}