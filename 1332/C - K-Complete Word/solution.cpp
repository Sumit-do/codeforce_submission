#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int nu=n/k;
    vector<vector<int>> freq(k,vector<int> (26,0));
    //int ans =0;
    fr(o,k){
        for(int i=o;i<n;i+=k){
            freq[o][s[i]-'a']++;
        }
    }
    int ans =0;
    for(int i=0;i<=(k-i-1);i++){
        //int sum =0,maxx=INT32_MIN;
        vector<int> f(26,0);
        for(int j=0;j<26;j++){
            if(k-i-1 != i)f[j]=freq[i][j]+freq[k-i-1][j];
            else f[j]=freq[i][j];
        }
        int sum=0,maxx=INT32_MIN;
        for(int j=0;j<26;j++){
            sum+=f[j];
            maxx=max(maxx,f[j]);
        }
        ans += sum-maxx;
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}