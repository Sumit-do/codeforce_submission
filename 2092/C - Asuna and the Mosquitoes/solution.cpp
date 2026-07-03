#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;cin>>n;
    vector<int> vec(n);
    int odd=0,ma=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]%2==1)odd++;
        sum+=vec[i];
        ma=max(ma,vec[i]);
    }
    cout<<max((long long)ma,(!(odd==n || odd==0))*(sum-(odd-1)))<<endl;
}
 
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}