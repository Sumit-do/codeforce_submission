#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
 
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    string s;
    cin>>s;
    int f_y=0;
    int i=0;
    while(s[i]){
        if(s[i]=='Y')f_y++;
        i++;
    }
    if(f_y>1) cout<<"NO"<<endl;
    else cout<<"YES
";
}
 
 
int main() {
    int t;
    cin>>t;
    while(t--)solve();
}