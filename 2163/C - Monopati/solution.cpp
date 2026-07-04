#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
//typedef long long ll;
 
bool cat(pair<int,int> b,pair<int,int> a){
    if(a.first<b.first)return true;
    if(a.first==b.first){
        //if(a.second>b.second)return false;
        if(a.second<b.second) return true;
    }
    return false;
}
 
 
void solve() {
    int n;
    cin >> n;
    vector<int> a1(n), a2(n);
    fr(i, n) cin >> a1[i];
    fr(i, n) cin >> a2[i];
 
    vector<pair<int, int>> upper_left(n), low_right(n);
    int cur_min = 2 * n + 1, cur_max = 0;
 
    // 1. Calculate Prefix Min/Max for Row 1
    for (int i = 0; i < n; i++) {
        cur_min = min(cur_min, a1[i]);
        cur_max = max(cur_max, a1[i]);
        upper_left[i] = {cur_min, cur_max};
    }
 
    // 2. Calculate Suffix Min/Max for Row 2
    cur_min = 2 * n + 1, cur_max = 0;
    for (int i = n - 1; i >= 0; i--) {
        cur_min = min(cur_min, a2[i]);
        cur_max = max(cur_max, a2[i]);
        low_right[i] = {cur_min, cur_max};
    }
 
    // 3. Initialize best_r array with a "null" value (2n + 1)
    vector<int> best_r(2 * n + 2, 2 * n + 1);
 
    for (int i = 0; i < n; i++) {
        int L_path = min(upper_left[i].first, low_right[i].first);
        int R_path = max(upper_left[i].second, low_right[i].second);
        // We want the smallest R for each specific L
        best_r[L_path] = min(best_r[L_path], R_path);
    }
 
    // 4. THE KEY STEP: Suffix Minimum
    // If a path works for L=10, it definitely works for l=9.
    // So for l=9, we check if the path from l=10 gives a smaller R.
    for (int i = 2 * n; i >= 1; i--) {
        best_r[i] = min(best_r[i], best_r[i + 1]);
    }
 
    // 5. Calculate total pairs (l, r)
    ll total_pairs = 0;
    for (int l = 1; l <= 2 * n; l++) {
        if (best_r[l] <= 2 * n) {
            // Number of valid r's is [best_r[l], 2*n]
            total_pairs += (2 * n - best_r[l] + 1);
        }
    }
 
    cout << total_pairs << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}