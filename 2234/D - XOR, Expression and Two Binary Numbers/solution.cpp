#include<bits/stdc++.h>
using namespace std;
 
// Memoization table: level (up to 35) and x, y, what (-1 to 1 mapped to 0 to 2)
long long memo[35][3][3][3];
 
int get_next(int x, int y){
    int t = x;
    x = min(x,y);
    y = max(y,t);
    if(x == -1){
        if(y == 0) return 1;
        if(y == 1) return 0;
    }
    return -1;
}
 
long long dp(int level, int x, int y, int what){
    /*if(level == 0) {
        return (int)(x == what);
    }*/
    if(level == 0) {
        long long ans = 0;
        if(x == what) ans++;
        if(y == what) ans++;
        return ans;
    }
    
    // Check memo table (offset by +1 to handle -1 index)
    if(memo[level][x+1][y+1][what+1] != -1) 
        return memo[level][x+1][y+1][what+1];
 
    int next_val = get_next(x, y);
    long long ans = dp(level-1, x, next_val, what) + dp(level-1, next_val, y, what);
    if(what == next_val) ans--;
    
     memo[level][x+1][y+1][what+1] = ans;
     return memo[level][x+1][y+1][what+1];
}
 
void solve(){
   int n, k; 
   cin >> n >> k;
   string s1, s2;
   cin >> s1 >> s2;
   
   long long num_x  = dp(k, -1, 1, -1);
   long long num_y  = dp(k, -1, 1, 1);
   long long num_xy = (long long )(1<<k)+1-num_x-num_y;
   
   long long ans_x=0, ans_y=0, ans_xy=0;
   long long ans_0=0, ans_1=0;
   
   for(int i=0; i<n; i++){
    if(s1[i]=='1') ans_1++;
    else ans_0++;
   }
   ans_x = ans_0 * ans_1;
   
   ans_0=0; ans_1=0;
   for(int i=0; i<n; i++){
    if(s2[i]=='1') ans_1++;
    else ans_0++;
   }
   ans_y = ans_0 * ans_1;
   
   ans_0=0; ans_1=0;
   for(int i=0; i<n; i++){
    if(s1[i]==s2[i]) ans_0++;
    else ans_1++;
   }
   ans_xy = ans_0 * ans_1;
   
   long long fin_ans = ans_x*num_x + ans_y*num_y + ans_xy*num_xy;
   cout << fin_ans << "
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Initialize memo table with -1 once
    memset(memo, -1, sizeof(memo));
    
    int t; 
    cin >> t;
    while(t--) solve();
    return 0;
}