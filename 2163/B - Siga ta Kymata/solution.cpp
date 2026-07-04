#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n),store(n+1);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        store[vec[i]]=i;
    }
    string s;cin>>s;
    if(!(s[0]==s[n-1] && s[0]=='0' && (s[store[n]]=='0' && s[store[1]]=='0')))return void(cout<<-1<<endl);
    cout<<5<<endl;
    cout<<1<<" "<<store[1]+1<<endl;
    cout<<1<<" "<<store[n]+1<<endl;
    cout<<store[1]+1<<" "<<n<<endl;
    cout<<store[n]+1<<" "<<n<<endl;
    cout<<min(store[1],store[n])+1<<" "<<max(store[1],store[n])+1<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}