#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
 
 
void solve(){
    string n;
    cin>>n;
    int ans = INT32_MAX;
    for(int i=0;i<62;i++){
        string to_comp = to_string((ll)1<<i);
        //string to=to_comp;
        int i1=0,j1=0;
        int count =0;
        while(i1<n.size() && j1<to_comp.size()){
            while (i1<n.size() && j1<to_comp.size() && n[i1]==to_comp[j1])
            {
                count++;
                j1++;
                i1++;
            }
            i1++;
        }
        int ops = ((int)n.size()-count) + ((int)to_comp.size()-count);
        ans=min(ans,ops);
    }
    cout<<ans<<endl;
}
 
 
 
 
int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}