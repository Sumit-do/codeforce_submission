#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
int f(ll x){
    int ans = 0;
    while(x > 0 && x % 2 == 0){
        ans++;
        x /= 2;
    }
    return ans;
}
 
int g(ll x){
    int ans = 0;
    while(x > 0 && x % 5 == 0){
        ans++;
        x /= 5;
    }
    return ans;
}
 
int dp[205][6005];
 
void solve(){
    int n, k;
    cin >> n >> k;
    
    vector<ll> vec(n);
    fr(i,n) cin >> vec[i];
 
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
 
    fr(i, n) {
        int p2 = f(vec[i]);
        int p5 = g(vec[i]);
        
        for(int j = k; j >= 1; j--) {
            for(int w = 6000; w >= p5; w--) {
                if(dp[j-1][w-p5] != -1) {
                    dp[j][w] = max(dp[j][w], dp[j-1][w-p5] + p2);
                }
            }
        }
    }
 
    int ans = 0;
    for(int w = 0; w <= 6000; w++) {
        if(dp[k][w] != -1) {
            ans = max(ans, min(w, dp[k][w]));
        }
    }
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    while (t--) {
        solve();
    }
    return 0;
}