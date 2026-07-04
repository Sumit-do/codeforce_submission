#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
void solve(){
    int n;
    cin>>n;
    vector<int> vec1(n),vec2(n);
    fr(i,n) cin>>vec1[i]; 
    fr(i,n) cin>>vec2[i];
    int l=0,r=n-1;
    fr(i,n){
        if(vec1[i]!=vec2[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(vec1[i]!=vec2[i]){
            r=i;
            break;
        }
    }
    for(int i=l-1;i>=0;i--){
        if(vec2[i]<=vec2[i+1]) {l--;}
        else{ break ;}
    }
    for(int i=r;i<n-1;i++){
        if(vec2[i]<=vec2[i+1]) {r++;}
        else{ break ;}
    }
    cout<<l+1<<' '<<r+1<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}