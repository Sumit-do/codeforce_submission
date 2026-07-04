#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
 
    long long total_count = 0;
    int layers = min(n, m) / 2;
 
    for (int k = 0; k < layers; ++k) {
        string layer = "";
 
        // 1. Top row
        for (int j = k; j < m - k; ++j) layer += grid[k][j];
        // 2. Right column
        for (int i = k + 1; i < n - k; ++i) layer += grid[i][m - 1 - k];
        // 3. Bottom row
        for (int j = m - 2 - k; j >= k; --j) layer += grid[n - 1 - k][j];
        // 4. Left column
        for (int i = n - 2 - k; i > k; --i) layer += grid[i][k];
 
        // Handle cyclic wrap-around
        string search_layer = layer + layer.substr(0, 3);
 
        // Count occurrences
        for (int i = 0; i + 3 < search_layer.length(); ++i) {
            if (search_layer.substr(i, 4) == "1543") {
                total_count++;
            }
        }
    }
    cout << total_count << endl;
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