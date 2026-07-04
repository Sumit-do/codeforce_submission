#include<bits/stdc++.h>
using namespace std;
 
// No need for 'g' or 'x' functions anymore
 
void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
 
    int k1 = 0, k2 = 1e9;
    int ans = 1e9; // Store the best answer found so far
 
    while(k1 <= k2){
        int t = k1 + (k2 - k1) / 2; // Safer way to calculate mid
        
        bool flag = true;
        int c_l = 0, c_r = 0; // Current valid range starts at [0, 0]
 
        for(int i=0; i<n; i++){
            int l = vec[i].first;
            int r = vec[i].second;
 
            // 1. Expand range by t (move)
            c_l = c_l - t;
            c_r = c_r + t;
 
            // 2. Intersect with new segment
            c_l = max(c_l, l);
            c_r = min(c_r, r);
 
            // 3. Check if valid
            if(c_l > c_r){
                flag = false;
                break;
            }
        }
 
        if(flag){
            ans = t;      // SAVE the answer
            k2 = t - 1;   // Try to find a smaller one
        }
        else{
            k1 = t + 1;   // Need a bigger k
        }
   }
   cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}