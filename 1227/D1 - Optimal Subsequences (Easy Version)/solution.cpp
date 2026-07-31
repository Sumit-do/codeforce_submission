#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int> temp=vec;
    sort(temp.begin(),temp.end(),greater<int> ());
    int m;cin>>m;
    while(m--){
        int k,jj;cin>>k>>jj;
        int curr=0;
        vector<bool> is(k, true);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                if(temp[j]==vec[i] && is[j]){
                    curr++;
                    is[j]=false;
                    //temp[j]=INT_MAX;
                    break;
                }
            }
            if(curr==jj){
                cout<<vec[i]<<endl;
                break;
            }
        }
    }
}
 
int main(){
    solve();
    return 0;
}