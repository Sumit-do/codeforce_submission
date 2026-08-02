#include<bits/stdc++.h>
using namespace std;
 
 
int f(int x){
    if(x<26)return x;
    return x+6;
}
 
void solve(){
    int r,c,k;
    cin>>r>>c>>k;
    vector<vector<char>> mat(r,vector<char> (c));
    vector<vector<char>> mat1(r,vector<char> (c));
 
    int count=0;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++){
        cin>>mat[i][j];
        if(mat[i][j]=='R')count++;
    }
    int dis=count/k,extra=count%k;
    int clock=0;
    int id=1;
    int curr=0;
    for(int i=0;i<r;i++){
        if(clock){
            for(int j=c-1;j>=0;j--){
                if(mat[i][j]=='R'){
                    curr++;
                }
                if(id<=10)mat1[i][j]=('0'+(id-1));
                else mat1[i][j]=('A'+f(id-11));
                if(curr==dis && extra==0){
                    if(id<k)id++;
                    curr=0;
                }
                else if(curr==(dis+1)){
                    if(id<k)id++;
                    curr=0;
                    extra--;
                }
            }
        }
        else{
            for(int j=0;j<c;j++){
                if(mat[i][j]=='R'){
                    curr++;
                }
                if(id<=10)mat1[i][j]=('0'+(id-1));
                else mat1[i][j]=('A'+f(id-11));
               // mat1[i][j]=char('a'+(id-1));//cout<<id;
                if(curr==dis && extra==0){
                    if(id<k)id++;
                    curr=0;
                }
                else if(curr==(dis+1)){
                    if(id<k)id++;
                    curr=0;
                    extra--;
                }
            }
        }
        //cout<<endl;
        clock=1-clock;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)cout<<mat1[i][j];
        cout<<endl;
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}