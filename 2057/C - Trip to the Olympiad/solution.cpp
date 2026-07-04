#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
void solve() {
    int l,r;
    cin>>l>>r;
    int left=0,middle =0,right=0;
    int i=30;
    while(i>=0 && ((l>>i)&1)==((r>>i)&1)){
        left+=((l>>i)&1)*(1<<i);
        right+=((l>>i)&1)*(1<<i);
        i--;
    }
    for(i;i>=0;i--){
        if(((l>>i)&1)==((r>>i)&1)){
            left+=(1<<i);
        }
        else{
            left+=((l>>i)&1)*(1<<i);
            right+=((r>>i)&1)*(1<<i);
        }
    }
    if(left+1 == right && right==r){
        cout<<left-1<<" "<<left<<" "<<right<<endl;
    }
    else if(left+1 == right && right!=r){
        cout<<left<<" "<<right<<" "<<right+1<<endl;
    }
    else{
        cout<<left<<" "<<left+1<<" "<<right<<endl;
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}