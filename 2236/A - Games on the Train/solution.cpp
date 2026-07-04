#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    int maxx=INT_MIN,minn=INT_MAX;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        maxx=max(maxx,y);
        minn=min(minn,y);
    }
    cout<<maxx-minn+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}