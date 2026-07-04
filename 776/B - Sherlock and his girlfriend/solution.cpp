#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n+2,1);
    int ans=2;
    for(int i=2;i*i<=(n+1);i++){
        if(vec[i]==1){
            for(int j=i*i;j<=(n+1);j+=i){
                vec[j]=ans;
            }
        }
    }
    if(n<3){
        cout<<1<<endl;
        for(int i=1;i<=n;i++) cout<<1<<" ";
        cout<<endl;
    }
    else{
        cout<<2<<endl;
        for(int i=2;i<=(n+1);i++) cout<<vec[i]<<" ";
        cout<<endl;
    }
}
 
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    //std::cin >> t;
    t=1;
    while(t--) solve();
 
    return 0;
}