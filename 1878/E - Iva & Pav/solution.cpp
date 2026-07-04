#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n) cin>>vec[i];
    vector<vector<int>> vecc(32,vector<int> (n,0));
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            if(((vec[j]>>i)&1)){
                vecc[i][j]=1;
            }
        }
    }
    //vector<vector<int>> vecc1(32,vector<int> (n,0));
    for(int i=0;i<32;i++){
        int c=0;
        int j=n-1;
        while(j>=0){
            while(j>=0 && vecc[i][j]==0) j--;
            c=0;
            while(j>=0 && vecc[i][j]==1){
                c++;
                vecc[i][j]=c;
                j--;
            }
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,k;
        cin>>l>>k;
        int r = INT_MAX;
        int ans = 0;
        for(int j=31;j>=0;j--){
            if(vecc[j][l-1]!=0){
                r = min(r,l+vecc[j][l-1]-1);
                ans += (1<<j);
                if(ans>=k) break;
            }
        }
        if(ans>=k){
            int r1 = l,r2=n;
            while(r1<=r2){
                int r_mid = (r1+r2)/2;
                int ans1 =0;
                for(int j=31;j>=0;j--){
                    if(vecc[j][l-1]!=0){
                        if((l + vecc[j][l-1]-1)>=r_mid){
                            ans1 += (1<<j);
                        }
                    }
                }
                if(ans1>=k){
                    r1=r_mid+1;
                }
                else{
                    r2=r_mid-1;
                }
            }
            cout<<r2<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}