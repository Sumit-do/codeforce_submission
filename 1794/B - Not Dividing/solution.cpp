#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    for(int i=0;i<n-1;i++){
        if(vec[i+1]==1){
            //if(vec[i]==2 && vec[i]==3 )
            if(vec[i]==1){
                vec[i]+=2;
                vec[i+1]++;
                continue;
            }
            if(vec[i]%2==0)vec[i+1]+=2;
            else vec[i+1]++;
            continue;
        }
 
        if(vec[i]==1){
            if(vec[i+1]==1){
                vec[i]+=2;
                vec[i+1]++;
            }
            if(vec[i+1]%2==0){
                vec[i]++;
                vec[i+1]++;
            }
            else{
                vec[i]++;
            }
            continue;
        }
        if(vec[i]==vec[i+1]){
            vec[i+1]++;
            continue;
        }
        if(vec[i+1]%vec[i]==0){
            vec[i+1]++;
        }
    }
    fr(i,n)cout<<vec[i]<<" ";
    cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}