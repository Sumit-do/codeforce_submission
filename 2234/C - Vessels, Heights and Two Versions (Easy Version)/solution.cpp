#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int> minnl(n),minr(n);
    for(int i=0;i<n;i++){
        fill(minnl.begin(), minnl.end(), 0);
        fill(minr.begin(), minr.end(), 0);
        int left = (i-1+n)%n,right = (i+1)%n;
        minnl[left]=vec[left];
        minr[right]=vec[i];
        for(int k=left;(k-1+n)%n != i ;k=(k-1+n)%n){
            int next = (k-1+n)%n;
            if(vec[next]>minnl[k])minnl[next]=vec[next];
            else minnl[next]=minnl[k];
        }
        for(int k=right;(k+1)%n != i;k=(k+1)%n){
            int next = (k+1)%n;
            if(vec[k]>minr[k])minr[next]=vec[k];
            else minr[next]=minr[k];
        }
        long long ans=0;
        for(int k=0;k<n;k++){
            if(k==i)continue;
            ans += min(minnl[k],minr[k]);
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
 
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}