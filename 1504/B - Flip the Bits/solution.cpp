#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
 
    // EDGE CASE TRICK:
    // Append a dummy character (like '0') to both strings.
    // This forces the loop to check the transition at the very end of the string.
    // If a matches b up to n-1, but a[n-1] != b[n-1], the loop will compare
    // index n-1 against index n (the dummy '0'), detect a change, and check the full prefix.
    a.push_back('0');
    b.push_back('0');
 
    int count0 = 0;
    int count1 = 0;
 
    // Loop until n (inclusive) because we added the dummy character at index n
    for (int i = 0; i < n; i++) {
        // 1. Maintain running counts for string A
        if (a[i] == '0') count0++;
        else count1++;
 
        // 2. Check "Flip Status"
        // curr_needs_flip: Does a[i] mismatch b[i]?
        // next_needs_flip: Does a[i+1] mismatch b[i+1]?
        bool curr_needs_flip = (a[i] != b[i]);
        bool next_needs_flip = (a[i+1] != b[i+1]);
 
        // 3. Detect Transition
        // If the requirement changes, we MUST have performed an operation
        // that ended exactly at index i (length i+1).
        if (curr_needs_flip != next_needs_flip) {
            // The prefix ending at i MUST be balanced
            if (count0 != count1) {
                cout << "NO
";
                return;
            }
        }
    }
 
    cout << "YES
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