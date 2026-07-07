#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
    for (auto &x : v) cin >> x;
 
    int count1 = 0;
    int count23 = 0;
    int count12 = 0;
    int count3 = 0;
 
    bool found = false;
    bool found2 = false;
    int number = -1;
 
    for (int i = 0; i < n; i++) {
        if (!found) {
            if (v[i] == 2 || v[i] == 3) {
                count23++;
            } else {
                count1++;
 
                if (count1 > count23) {
                    found = true;
 
                    if (i + 1 < n && v[i + 1] == 3)
                        i++;
                }
                else if (count1 == count23) {
                    found = true;
                }
            }
        }
        else if (!found2) {
            if (v[i] == 3) {
                count3++;
            }
            else {
                count12++;
 
                if (count12 >= count3) {
                    found2 = true;
                    number = i;
                    break;
                }
            }
        }
    }
 
    if (found && found2 && number != n - 1)
        cout << "YES
";
    else
        cout << "NO
";
}
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}