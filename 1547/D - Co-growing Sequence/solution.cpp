#include <iostream>
#include <vector>
#include <numeric>
 
// This function encapsulates the logic for a single test case.
void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
    }
    
    // 'prev_z' will store the value of (x_{i-1} XOR y_{i-1})
    // It represents the previous number in the "growing" sequence.
    int prev_z = 0; 
 
    // We process the sequence element by element.
    for (int i = 0; i < n; ++i) {
        // Find the minimal y_i required.
        // The bits we must turn ON in y_i are those that are ON in prev_z
        // but OFF in the current x[i]. This ensures the "growing" property.
        // This is captured by the bitwise formula: prev_z AND (NOT x[i])
        int y_i = prev_z & (~x[i]);
        
        // The new "growing" number z_i is calculated.
        int current_z = x[i] ^ y_i;
        
        // Update prev_z for the next iteration.
        prev_z = current_z;
        
        // Print the calculated y_i.
        std::cout << y_i << (i == n - 1 ? "" : " ");
    }
    std::cout << "
";
}
 
int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}