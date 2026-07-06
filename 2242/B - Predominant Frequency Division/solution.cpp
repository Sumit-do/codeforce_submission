#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
 
    vector<int> p1(n), p2(n);
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i) {
        c1 += (a[i] == 1 ? 1 : -1);
        p1[i] = c1;
        c2 += (a[i] <= 2 ? 1 : -1);
        p2[i] = c2;
    }
 
    vector<int> mx(n);
    if (n > 2) {
        mx[n - 2] = p2[n - 2];
        for (int i = n - 3; i >= 0; --i) {
            mx[i] = max(p2[i], mx[i + 1]);
        }
    }
 
    for (int i = 0; i < n - 2; ++i) {
        if (p1[i] >= 0 && mx[i + 1] >= p2[i]) {
            cout << "YES
";
            return;
        }
    }
    cout << "NO
";
}
 
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}