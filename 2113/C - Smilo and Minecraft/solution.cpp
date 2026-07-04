#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<char>> mat(n,vector<char> (m));
    vector<vector<long long>> mat1(n+1,vector<long long> (m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            mat1[i+1][j+1]=mat1[i][j+1]+mat1[i+1][j]-mat1[i][j]+(mat[i][j]=='g');
        }
    }
    long long count_min =LLONG_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='.'){
                int p1=max(i-k+1,0),p2=min(i+k,n);
                int r1=max(j-k+1,0),r2=min(m,j+k);
                long long diff = mat1[p2][r2]-mat1[p1][r2]-mat1[p2][r1]+mat1[p1][r1];
                count_min=min(count_min,diff);
            }
        }
    }
    cout<<mat1[n][m]-count_min<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}