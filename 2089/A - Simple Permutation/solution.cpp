#include<bits/stdc++.h>
using namespace std;
 
 
bool check(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i == 0)return false;
    }
    return true;
}
 
void solve(){
    int n;cin>>n;
    if(n==2){
        cout<<1<<" "<<2<<endl;
        return;
    }
    vector<bool> visited(n+1);
    int p=-1;
    for(int i=n/3;i<=(2*n+2)/3;i++){
        if(check(i)){
            p=i;
            break;
        }
    }
    vector<int> ans;
    ans.push_back(p);
    visited[p]=true;
    for(int i=1;i<=n;i++){
        if((p-i)>0){
            ans.push_back(p-i);
            visited[p-i]=true;
        }
        if((p+i)<=n){
            ans.push_back(p+i);
            visited[p+i]=true;
        }
    }
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}
 
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}