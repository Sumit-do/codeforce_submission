#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f_2025=0,f_2026=0;
    int i=0;
    for(int i=0;i<s.size()-3;i++){
        string c;
        c.push_back(s[i]);
        c.push_back(s[i+1]);
        c.push_back(s[i+2]);
        c.push_back(s[i+3]);
        //cout<<c<<" ";
        if(c=="2025")f_2025++;
        if(c=="2026")f_2026++;
    }
    //cout<<f_2025<<" "<<f_2026<<endl;
    if(f_2025!=0 && f_2026==0){
        return void(cout<<1<<endl);
    }
    cout<<0<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}