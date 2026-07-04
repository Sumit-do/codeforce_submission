#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    if (n % 2 == 1) { 
        cout << -1 << "
";
        return;
    }
 
    vector<int> ops; // store positions of insertions
    int left = 0, right = n - 1;
 
    while (left < right) {
        if (s[left] == s[right]) {
            if (s[left] == '0') {
                // Insert "01" after s[right]
                ops.push_back(right + 1);
                s.insert(right + 1, "01");
                right += 2; // adjust because string grew
            } else {
                // Insert "01" before s[left]
                ops.push_back(left);
                s.insert(left, "01");
                right += 1;
                left += 1; // skip over inserted part
            }
        } else {
            left++;
            right--;
        }
        if (ops.size() > 300) break;
    }
 
    if (ops.size() > 300) {
        cout << -1 << "
";
    } else {
        cout << ops.size() << "
";
        for (int x : ops) cout << x << " ";
        cout << "
";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}