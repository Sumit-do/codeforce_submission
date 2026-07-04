#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    string a;
    cin>>a;
    
    int i=0,j=n-1;
    int curr=0;
    while(curr!=n){
        if(a[curr]=='L'){
            i++;
        }
        else{
            j--;
        }
        curr++;
    }
    curr--;
    ll lol=1;
    vector<int> vec1(n);
    while(curr>=0){
        if(a[curr]=='L'){
            i--;
            lol*=(vec[i]%m);
            lol %= m;
        }
        else{
            j++;
            lol*=(vec[j]%m);
            lol %= m;
        }
        //cout<<lol<<" ";
        vec1[curr]=lol;
        curr--;
    }
    //cout<<endl;
    fr(i,n)cout<<vec1[i]<<" ";
    cout<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}