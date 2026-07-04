#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    /*if(n==1 || m==1){
        int B=0,W=0;
        if(n==1){
            for(int i=0;i<m;i++){
                if(mat[0][i]=='W'){
                    W++;
                }
                else{
                    B++;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(mat[i][0]=='W'){
                    W++;
                }
                else{
                    B++;
                }
            }
        }
        if(B!=0  && W !=0 ){
            cout<<"NO
";
            return ;
        }
        cout<<"YES
";
        return ;
    }*/
    //checking parrellel upper
    bool flag=true;
    int b1=0,w1=0;
    for(int i=0;i<m;i++){
        if(mat[0][i]=='W'){
            w1++;
        }
        else{
            b1++;
        }
    }
    int b2=0,w2=0;
    for(int i=0;i<m;i++){
        if(mat[n-1][i]=='W'){
            w2++;
        }
        else{
            b2++;
        }
    }
    if((b1==m && w2==m) || (w1==m && b2==m)){
        flag = false;
    }
    b1=0,b2=0,w1=0,w2=0;
    // for side pareller
    for(int i=0;i<n;i++){
        if(mat[i][0]=='W'){
            w1++;
        }
        else{
            b1++;
        }
    }
    for(int i=0;i<n;i++){
        if(mat[i][m-1]=='W'){
            w2++;
        }
        else{
            b2++;
        }
    }
    if((b1==n && w2==n) || (w1==n && b2==n)){
        flag = false;
    }
 
    if(flag){
        cout<<"YES
";
        return ;
    }
    cout<<"NO
";
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}