#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    int pos = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 1 && a[i] != -1) pos = i;
    }
 
    auto get_sub = [&](int l, int r) {
        long long mn = 0, mx = 0, c_mn = 0, c_mx = 0;
        for (int i = l; i <= r; i++) {
            c_mx = max(0LL, c_mx + a[i]); 
            c_mn = min(0LL, c_mn + a[i]);
            mx = max(mx, c_mx); 
            mn = min(mn, c_mn);
        }
        return make_pair(mn, mx);
    };
 
    auto get_pref = [&](int l, int r) {
        long long mn = 0, mx = 0, sum = 0;
        for (int i = l; i <= r; i++) {
            sum += a[i]; 
            mx = max(mx, sum); 
            mn = min(mn, sum);
        }
        return make_pair(mn, mx);
    };
 
    auto get_suff = [&](int l, int r) {
        long long mn = 0, mx = 0, sum = 0;
        for (int i = r; i >= l; i--) {
            sum += a[i]; 
            mx = max(mx, sum); 
            mn = min(mn, sum);
        }
        return make_pair(mn, mx);
    };
 
    if (pos == -1) {
        pair<long long, long long> p = get_sub(0, n - 1);
        cout << p.second - p.first + 1 << "
";
        for (long long i = p.first; i <= p.second; i++) cout << i << " ";
        cout << "
";
        return;
    }
 
    pair<long long, long long> left_sub = get_sub(0, pos - 1);
    pair<long long, long long> right_sub = get_sub(pos + 1, n - 1);
    long long l1 = min(left_sub.first, right_sub.first);
    long long r1 = max(left_sub.second, right_sub.second);
 
    pair<long long, long long> suff = get_suff(0, pos - 1);
    pair<long long, long long> pref = get_pref(pos + 1, n - 1);
    
    long long l2 = suff.first + a[pos] + pref.first;
    long long r2 = suff.second + a[pos] + pref.second;
 
    vector<pair<long long, long long>> ivals = {{l1, r1}, {l2, r2}};
    sort(ivals.begin(), ivals.end());
 
    if (ivals[0].second >= ivals[1].first - 1) { // Merge condition
        long long L = ivals[0].first;
        long long R = max(ivals[0].second, ivals[1].second);
        cout << R - L + 1 << "
";
        for (long long i = L; i <= R; i++) cout << i << " ";
    } else {
        cout << (ivals[0].second - ivals[0].first + 1) + (ivals[1].second - ivals[1].first + 1) << "
";
        for (long long i = ivals[0].first; i <= ivals[0].second; i++) cout << i << " ";
        for (long long i = ivals[1].first; i <= ivals[1].second; i++) cout << i << " ";
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}