#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n;
    cin>>n;
    vector<string> mat(n);
    fr(i,n){
        cin>>mat[i];
    }
    vector<vector<int>> store(n,vector<int> ());
    fr(i,n){
        fr(j,n){
            if(mat[i][j]=='1'){
                store[i].push_back(j);
            }
        }
    }
    vector<set<int>> sets(n);
    fr(i,n){
        int to_add=i+1;
        sets[i].insert(to_add);
        for(auto it:store[i]){
            sets[it].insert(to_add);
        }
    }
    fr(i,n){
        cout<<sets[i].size()<<" ";
        for(auto it:sets[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}