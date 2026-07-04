#include<bits/stdc++.h>
using namespace std;
 
 
struct Fenwick {
    int n;
    vector<long long> tree;
    Fenwick(int n) : n(n), tree(n + 1, 0) {}
    
    void add(int i, long long delta) {
        for (; i <= n; i += i & -i) tree[i] += delta;
    }
    
    long long query(int i) {
        long long sum = 0;
        for (; i > 0; i -= i & -i) sum += tree[i];
        return sum;
    }
};
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
 
    long long base_ans = 0;
    int max_bonus = 0;
 
    Fenwick left_count(n);
    Fenwick right_count(n);
    Fenwick right_sum(n);
 
    
    for (int i = 1; i <= n; i++) {
        // Elements >= a[i] is (total seen so far) - (elements < a[i])
        int greater_or_equal = (i - 1) - left_count.query(a[i] - 1);
        max_bonus = max(max_bonus, greater_or_equal);
        left_count.add(a[i], 1);
    }
 
    
    for (int i = n; i >= 1; i--) {
        int x = a[i];
        
        long long sum_less_eq = right_sum.query(x);
        long long count_greater = right_count.query(n) - right_count.query(x);
        
        long long subtractions = sum_less_eq + x * count_greater;
        base_ans += 1LL * x * (n - i) - subtractions;
        
        right_count.add(x, 1);
        right_sum.add(x, x);
    }
 
    cout << base_ans + max_bonus << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}