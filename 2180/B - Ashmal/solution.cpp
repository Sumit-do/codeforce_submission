#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
 
void solve(){
    int n;
    cin>>n;
    vector<string> vec(n);
    string s;
    fr(i,n)cin>>vec[i];
    fr(i,n){
        string a =s+vec[i];
        string b = vec[i]+s;
        if(a<b){
            s=a;
        }
        else{
            s=b;
        }
    }
    cout<<s<<endl;
}
   
 
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}