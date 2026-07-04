#include<bits/stdc++.h>
using namespace std;
 
long long power(long long base, long long exp) {
    long long res = 1;
    base %= 998244353;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 998244353;
        base = (base * base) % 998244353;
        exp /= 2;
    }
    return res;
}
 
void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    
    long long MOD = 998244353;
    long long EXP_MOD = 998244352;
 
    long long total_cells = ((n % EXP_MOD) * (m % EXP_MOD)) % EXP_MOD;
    
    long long n_r = (n - r + 1) % EXP_MOD;
    long long m_c = (m - c + 1) % EXP_MOD;
    long long constraints = (n_r * m_c) % EXP_MOD;
    
    long long exponent = (total_cells - constraints + EXP_MOD) % EXP_MOD;
    
    cout << power(2, exponent) << "
";
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}