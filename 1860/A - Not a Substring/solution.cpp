#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    string str;
    cin >> str;
    
    int n=str.size();
    string a ="";
    fr(i,n){
        a = a + "()";
    }
    string b="";
    fr(i,n){
        b = b+"(";
    }
    fr(i,n){
        b = b+")";
    }
    bool f1=false,f2=false;
    for(int i=0;i<n-1;i++){
        string a = str.substr(i,2);
        if(a==")(")f1=true;
        if(a=="((" || a=="))")f2=true;
    }
    if(f1){
        cout<<"YES
";
        cout<<b<<endl;
        return;
    }
    if(f2){
        cout<<"YES
";
        cout<<a<<endl;
        return;
    }
    cout<<"NO
";
}
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}