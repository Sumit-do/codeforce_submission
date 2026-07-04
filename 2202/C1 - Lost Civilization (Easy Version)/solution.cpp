#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    fr(i,n)cin>>vec[i];
    stack<int> s;
    s.push(vec[n-1]);
    for(int i=n-2;i>=0;i--){
        //int a= s.top();
        while(!s.empty() && s.top()==vec[i]+1){
            s.pop();
        }
        s.push(vec[i]);
    }
    cout<<s.size()<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}