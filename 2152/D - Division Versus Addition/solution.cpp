#include<bits/stdc++.h>
using namespace std;
 
int f(int x){
    if (x <= 3) return 1;
    return f(x/2 + 1) + 1;
}
 
int check(int x){
    if (x <= 2) return 0;
    int xx = x - 1;
    return ((xx & (xx - 1)) == 0);
}
 
void solve(){
    int n, q;
    cin >> n >> q;
    vector<long long> dp(n);
    vector<int> vec(n), count(n, 0);
    for(int i = 0; i < n; i++) cin >> vec[i];
    
    dp[0] = f(vec[0]);
    count[0] = check(vec[0]);
    
    for(int i = 1; i < n; i++){
        dp[i] = dp[i-1] + f(vec[i]);
        count[i] = count[i-1] + check(vec[i]);
    }
    
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        long long ans = dp[r-1] - dp[l-1] + f(vec[l-1]);
        int special_count = count[r-1] - count[l-1] + check(vec[l-1]);
        ans += (special_count / 2);
        cout << ans << "
";
    }
}
 
int main(){
    
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}