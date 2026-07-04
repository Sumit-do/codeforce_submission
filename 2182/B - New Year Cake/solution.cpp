#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
int even_n(int n){
    //int curr=1;
    int ans = 0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            ans += (1<<i);
        }
    }
    return ans;
}
int odd_n(int n){
    //int curr=1;
    int ans = 0;
    for(int i=0;i<=n;i++){
        if(i%2==1){
            ans += (1<<i);
        }
    }
    return ans;
}
 
void solve(){
    int a,b;
    cin>>a>>b;
    int a1 = min(a,b),b1=max(a,b);
    int ans = 0;
    for(int n=0;n<30;n++){
        int t1= min(even_n(n),odd_n(n)),t2=max(even_n(n),odd_n(n));
        if(t1<=a1 && t2<= b1)ans = max(ans,n+1);
    }
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}