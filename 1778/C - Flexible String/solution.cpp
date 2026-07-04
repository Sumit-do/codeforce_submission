#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
 
void solve() {
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    set<char> s;
    fr(i,n)s.insert(a[i]);
    if(k>=s.size()){
        long long ans = n;
        ans*=(n+1);
        ans/=2;
        cout<<ans<<endl;
        //cout<<"dsf1
";
        return;
    }
    else{
        int size=s.size();
        ll ans = LLONG_MIN;
        //cout<<(1<<10)<<endl;
        for(int i=0;i<1024;i++){
            if (__builtin_popcount(i) > k) continue;
            int o=0;
            string a1=a;
            int count=0;
            //set<char> temp;
            vector<int> temp(27,0);
            int yu=0;
            for(auto it:s){
                if(((i>>o)&1)){
                    temp[it-'a']=1;
                    yu++;
                }
                o++;
            }
            if(yu>k)continue;
            ll ans1=0;
            int pi=0,pj=0;
            fr(i,n){
                if(temp[a[i]-'a'])a1[i]=b[i];
            }
            while(pj<n){
                if(a1[pi]==b[pi]){
                    while(pj<n && a1[pj]==b[pj])pj++;
                    ll size_p=pj-pi;
                    ans1 += (size_p)*(size_p+1)/2;
                    pi=pj;
                }
                else{
                    while(pi<n && a1[pi]!=b[pi])pi++;
                    pj=pi;
                }
            }
            ans = max(ans,ans1);
        }
        cout<<ans<<endl;
        //cout<<"dsf2
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}