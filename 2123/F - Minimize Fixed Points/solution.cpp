#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,int> mpp;
    vector<int> ans(n+1);
    mpp[1]=1;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        bool flag = false;
        for(int j=2;j*j<=i;j++){
            if(i%j==0 && mpp[j]==j){
                int indx_j=mpp[j];
                ans[i]=i;
                swap(ans[i],ans[indx_j]);
                mpp[j]=i;
                mpp[i]=indx_j;
                flag=true;
                break;
            }
            if((i%j==0) && mpp[i/j]==(i/j)){
                j=i/j;
                int indx_j=mpp[j];
                ans[i]=i;
                swap(ans[i],ans[indx_j]);
                mpp[j]=i;
                mpp[i]=indx_j;
                flag=true;
                break;
            }
        }
        if(flag)continue;
       // if(flag){
            for(int j=2;j*j<=i;j++){
            if(i%j==0){
                int indx_j=mpp[j];
                ans[i]=i;
                swap(ans[i],ans[indx_j]);
                mpp[j]=i;
                mpp[i]=indx_j;
                flag=true;
                break;
            }
            }
        //} 
        if(flag)continue;
        ans[i]=i;
        mpp[i]=i;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<"
";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}