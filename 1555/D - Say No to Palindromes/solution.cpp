#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<vector<char>> store(6,vector<char>(n));
    vector<vector<int>> store1(6,vector<int>(n));
    fr(i,6){
        int u=i/2;
        if(i%2==0){
            string hh="abc";
            fr(o,n){
                store[i][o]=hh[(o+u)%3];
            }
        }
        else{
            string hh="acb";
            fr(o,n){
                store[i][o]=hh[(o+u)%3];
            }
        }
        fr(j,n){
            if(store[i][j]!=s[j])store1[i][j]=1;
            else store1[i][j]=0;
        }
        for(int j=1;j<n;j++)store1[i][j]+=store1[i][j-1];
    }
    /*fr(i,6){
        fr(k,n)cout<<store[i][k]<<" ";
        cout<<endl;
        fr(k,n)cout<<store1[i][k]<<" ";
        cout<<endl;
        cout<<endl;
    }*/
    fr(i,m){
        int l,r;
        cin>>l>>r;
        int ans = INT32_MAX;
        fr(k,6){
            ans = min(ans,store1[k][r-1]-store1[k][l-1]+(store[k][l-1]!=s[l-1]));
        }
        cout<<ans<<endl;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}