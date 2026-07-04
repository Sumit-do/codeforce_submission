#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
 
    int i = 0, j = n - 1;
    int ss_m = 1, ss_ma = n;
 
    while (i < j && i<n && j>=0) {
        if (vec[i] == ss_m) {
            i++;
            ss_m++;
        } 
        else if (vec[i] == ss_ma) {
            i++;
            ss_ma--;
        } 
        else if (vec[j] == ss_m) {
            j--;
            ss_m++;
        } 
        else if (vec[j] == ss_ma) {
            j--;
            ss_ma--;
        } 
        else {
            cout << i +1 << " " << j +1<< endl;
            return;
        }
    }
 
    cout << -1 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}