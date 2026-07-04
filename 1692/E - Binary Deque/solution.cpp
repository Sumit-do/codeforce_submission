#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
 
void solve() {
   int n,s;
   cin>>n>>s;
   vector<int> vec(n);
   fr(i,n) cin>>vec[i];
    vector<int> sum(n,0);
    sum[0]=vec[0];
    for(int i=1;i<n;i++){
        sum[i] += sum[i-1] + vec[i];
    }
    if(sum[n-1]==s){
        cout<<0<<endl;
        return ;
    }
    if(sum[n-1]<s){
        cout<<-1<<endl;
        return ;
    }
    int result = INT_MAX;
    int ans = 0;
    for(int i=0;i<n;i++){
        int k = s+sum[i] - vec[i];
        auto it = upper_bound(sum.begin()+i,sum.end(),k);
        if(it==sum.begin()){
            //cout<<-1<<endl;
            continue;
        }
        it--;
        int idx = it - sum.begin();
        if((sum[idx] - sum[i] + vec[i])==s){
            result = min(result,ans + n-1 - idx);
        }
        ans++;
    }
    //if(result = )
    cout<<result<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}