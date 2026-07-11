#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<vector<int>> vec(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int x=INT_MIN,y=x;
    int count[n+1]={0};
    for(int i=1;i<=n;i++){
        int ne=vec[i].size();
        count[ne]++;
        if(ne>x){
            y=x;
            x=ne;
        }
        else y=max(y,ne);
    }
    for(int i=1;i<=n;i++){
        int x_ne=vec[i].size();
        if(x_ne!=x)continue;
        int yy=0;
        if(x==y)yy++;
        for(auto it:vec[i]){
            if(vec[it].size()==y)yy++;
        }
        if(yy<count[y])return void(cout<<(x-1+y)<<endl);
    }
    cout<<x+y-2<<endl;
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}