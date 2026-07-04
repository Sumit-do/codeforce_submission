#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
void solve(){
    int n,m;
    cin>>n>>m;
    set<int> s[n];
    fr(i,n){
        int c;
        cin>>c;
        fr(j,c){
            int t;
            cin>>t;
            s[i].insert(t);
        }
        
    }
    vector<int> freq(m+1,0);
    fr(i,n){
        for(auto it:s[i]){
            freq[it]++;
        }
    }
    bool flag = true;
    int tt=2;
    fr(i,n){
        if(tt==0) break;
        bool t=true;
        for(auto it:s[i]){
            if(freq[it]==1){
                t = false;
                break;
            }
        }
        if(t){
            tt--;
        }
    }
    if(tt!=0) flag = false; 
    for(int i=1;i<=m;i++){
        if(freq[i]<1){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--) solve();
    return 0;
}