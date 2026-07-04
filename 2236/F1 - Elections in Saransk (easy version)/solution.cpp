#include <bits/stdc++.h>
using namespace std;
 
const int MAXA = 500005;
const int MOD = 1e9 + 7;
 
int spf[MAXA];
long long p_sum[MAXA];
vector<int> used_primes;
 
void precompute() {
    for (int i = 1; i < MAXA; i++) spf[i] = i;
    for (int i = 2; i * i < MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXA; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
 
void solve() {
    int n, x;
    cin >> n >> x; 
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        while (val > 1) {
            int p = spf[val];
            int count = 0;
            while (val % p == 0) {
                count++;
                val /= p;
            }
            if (p_sum[p] == 0) {
                used_primes.push_back(p);
            }
            p_sum[p] += count;
        }
    }
 
    long long ans = 1;
    for (int p : used_primes) {
        ans = (ans * (p_sum[p] + 1)) % MOD;
        p_sum[p] = 0; 
    }
    used_primes.clear();
 
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;cin>>t;
    while(t--)solve();
    return 0;
}