#include <iostream>
#include <vector>
#include <string>
#include <numeric>
 
using namespace std;
 
int get_sum(const string& s) {
    int sum = 0;
    for (char c : s) sum += (c - '0');
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<string> s(n);
    int cnt[6][50] = {0}; // cnt[length][sum]
 
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        cnt[s[i].size()][get_sum(s[i])]++;
    }
 
    long long ans = 0;
 
    for (int i = 0; i < n; ++i) {
        int len_i = s[i].size();
        int sum_i = get_sum(s[i]);
 
        // Consider s[i] as the first part of the concatenation (s_i + s_j)
        // We iterate over possible lengths of s_j
        for (int len_j = 1; len_j <= 5; ++len_j) {
            int total_len = len_i + len_j;
            if (total_len % 2 != 0 || len_i < len_j) continue;
 
            // The middle point of the combined ticket (s_i + s_j)
            int mid = total_len / 2;
            
            // s_i covers the first 'mid' digits and some of the second half
            int sum_first_half = 0;
            for (int k = 0; k < mid; ++k) sum_first_half += (s[i][k] - '0');
            
            int sum_second_half_in_si = sum_i - sum_first_half;
            
            // Required sum for s_j: sum_first_half = sum_second_half_in_si + sum_sj
            int target_sum_j = sum_first_half - sum_second_half_in_si;
 
            if (target_sum_j >= 0) {
                ans += cnt[len_j][target_sum_j];
            }
        }
 
        // Consider s[i] as the SECOND part of the concatenation (s_j + s_i)
        // Note: We only look for cases where |s_j| < |s_i| to avoid double counting s_i + s_i
        for (int len_j = 1; len_j < 5; ++len_j) {
            int total_len = len_i + len_j;
            if (total_len % 2 != 0 || len_i <= len_j) continue;
 
            int mid = total_len / 2;
            
            // s_i covers the end. The first 'mid' digits are s_j + part of s_i.
            // But it's easier to think about the second half.
            // The second half (mid digits) is entirely inside s_i.
            int sum_second_half = 0;
            for (int k = len_i - 1; k >= len_i - mid; --k) sum_second_half += (s[i][k] - '0');
            
            int sum_first_half_in_si = sum_i - sum_second_half;
            int target_sum_j = sum_second_half - sum_first_half_in_si;
 
            if (target_sum_j >= 0) {
                ans += cnt[len_j][target_sum_j];
            }
        }
    }
 
    cout << ans << endl;
 
    return 0;
}