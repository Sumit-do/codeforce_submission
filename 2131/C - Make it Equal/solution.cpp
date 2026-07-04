#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    ll k;   
    cin >> k;
    vector<ll> a(n), b(n);
 
    fr(i,n) cin >> a[i];
    fr(i,n) cin >> b[i];
 
    map<ll,int> mpp1;
    fr(i,n){
        mpp1[b[i] % k]++;
    }
 
    fr(i,n){
        ll t1 = a[i] % k;
        ll t2 = (k - t1) % k;  // ✅ FIX: ensures remainder is always in [0, k-1]
        
        if(mpp1.count(t1) || mpp1.count(t2)){
            if(mpp1.count(t1)){
                mpp1[t1]--;
                if(mpp1[t1] == 0) mpp1.erase(t1);
            }
            else if(mpp1.count(t2)){
                mpp1[t2]--;
                if(mpp1[t2] == 0) mpp1.erase(t2);
            }
        } 
    }
 
    if(mpp1.empty()){
        cout << "YES
";
    }
    else{
        cout << "NO
";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}