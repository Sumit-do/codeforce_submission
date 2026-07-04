#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include<bits/stdc++.h>
using namespace std;
#define   fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> allfactors;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n /= i;
                allfactors.push_back(i);
            }
        }
    }
    if(n>1) allfactors.push_back(n);
    if(k>allfactors.size()){
        cout<<-1<<endl;
        return ;
    }
    for(int i=1;i<=(k-1);i++){
        cout<<allfactors[i-1]<<" ";
    }
    int i= k-1;
    int temp_ans =1;
    while(i<allfactors.size()){
        temp_ans *= allfactors[i];
        i++;
    }
    if(temp_ans>1) cout<<temp_ans;
    cout<<endl;
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