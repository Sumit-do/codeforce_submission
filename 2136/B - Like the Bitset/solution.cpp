#include <iostream>
#include <vector>
#include <string>
#include <numeric>
 
void solve() {
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
 
    int consecutive_ones = 0;
    bool impossible = false;
    for (char c : s) {
        if (c == '1') {
            consecutive_ones++;
        } else {
            consecutive_ones = 0;
        }
        if (consecutive_ones >= k) {
            impossible = true;
            break;
        }
    }
 
    if (impossible) {
        std::cout << "NO
";
        return;
    }
 
    std::cout << "YES
";
 
    std::vector<int> p(n);
    int num_ones = 0;
    for (char c : s) {
        if (c == '1') {
            num_ones++;
        }
    }
 
    int one_val = 1;
    int zero_val = num_ones + 1;
 
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            p[i] = one_val++;
        } else {
            p[i] = zero_val++;
        }
    }
 
    for (int i = 0; i < n; ++i) {
        std::cout << p[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << "
";
}
 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}