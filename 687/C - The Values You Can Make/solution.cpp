#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    if (!(cin >> n >> k)) return 0;
 
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
 
    
    static bool dp[501][501][501]; 
    
   
    dp[0][0][0] = true;
 
    for (int i = 1; i <= n; i++) {
        int val = vec[i - 1]; 
        for (int kk = 0; kk <= k; kk++) {         
            for (int x = 0; x <= k; x++) {        
                
                
                dp[i][x][kk] = dp[i - 1][x][kk];
 
                
                if (kk >= val) {
                    dp[i][x][kk] = dp[i][x][kk] || dp[i - 1][x][kk - val];
                }
 
                
                if (kk >= val && x >= val) {
                    dp[i][x][kk] = dp[i][x][kk] || dp[i - 1][x - val][kk - val];
                }
            }
        }
    }
 
    vector<int> result_values;
    int count = 0;
    
    
    for (int x = 0; x <= k; x++) {
        if (dp[n][x][k]) {
            result_values.push_back(x);
            count++;
        }
    }
 
    cout << count << endl;
    for (int i = 0; i < result_values.size(); i++) {
        cout << result_values[i] << (i == result_values.size() - 1 ? "" : " ");
    }
    cout << endl;
 
    return 0;
}