#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
int f1(int x,int j){
    if((j>>1)&1)return (x-1);
    return (x+1);
}
int f2(int y,int j){
    if(j&1)return y-1;
    return y+1;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char>(m));
    int sx,sy;
    fr(i,n){
        fr(j,m){
            cin>>mat[i][j];
            if(mat[i][j]=='S'){
                sx=i;
                sy=j;
            }
        }
    }
    bool visited[n][m][4][4]={false};
    struct point{
        int x,y,dir,cns;
    };
    queue<point>q;
    q.push({sx,sy,-1,0});
    int d=0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    while(q.size()){
        int size=q.size();
        fr(i,size){
            point kk =q.front();
            int x=kk.x,y=kk.y,dir=kk.dir,cns=kk.cns;
            if(mat[x][y]=='T')return void(cout<<d<<endl);
            q.pop();
            for(int j=0;j<=3;j++){
                //loki
                //if(j==dir && cns==3)continue;
                int nx=dx[j]+x,ny=y+dy[j];
                int cntt=(j==dir) ? cns+1:1;
                if((nx>=0 && nx<n)&&(ny>=0 && ny<m)&&(!visited[nx][ny][j][cntt])&&(cntt<=3)&&mat[nx][ny]!='#'){
                    q.push({nx,ny,j,cntt});
                    visited[nx][ny][j][cntt]=true;
                }
            }
        }
        d++;
    }
    cout<<-1<<endl;
}
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    //cin >> t;
    while (t--) solve();
}