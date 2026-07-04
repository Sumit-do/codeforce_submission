#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
// Helper to check if a 2-digit number is prime
bool is_not_prime(int n) {
    if (n < 2) return true; // 1 is not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}
 
void solve() {
    int k;
    string n;
    cin >> k >> n;
 
    // Step 1: Check for single-digit non-primes
    for (int i = 0; i < k; i++) {
        if (n[i] == '1' || n[i] == '4' || n[i] == '6' || n[i] == '8' || n[i] == '9') {
            cout << 1 << endl;
            cout << n[i] << endl;
            return;
        }
    }
 
    // Step 2: Check for two-digit non-primes
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            int val = (n[i] - '0') * 10 + (n[j] - '0');
            if (is_not_prime(val)) {
                cout << 2 << endl;
                cout << val << endl;
                return;
            }
        }
    }
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