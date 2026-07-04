#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, d;
    cin >> n >> d;
 
    vector<int> a(n+1), aa(n);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        aa[i] = t;
        a[t] = i;
    }
 
    vector<int> b(n+1), bb(n);
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        bb[i] = t;
        b[t] = i;
    }
 
    auto contrib = [&](int i) -> int {
        if(i < 0 || i >= n-1) return 0;
        return (a[bb[i+1]] < a[bb[i]]) ? 1 : 0;
    };
 
    long long k = 0;
    for(int i = 0; i < n-1; i++){
        k += contrib(i);
    }
 
    auto answer = [&]() -> long long {
        return (long long)k * n + (a[bb[n-1]] + 1) - n;
    };
 
    cout << answer() << "
";
 
    for(int day = 1; day < d; day++){
        int c, x, y;
        cin >> c >> x >> y;
 
        x--;
        y--;
 
        if(c == 1){
            int t1 = aa[x], t2 = aa[y];
 
            int bt1 = b[t1];
            int bt2 = b[t2];
 
            set<int> pairs;
            if(bt1 > 0) pairs.insert(bt1 - 1);
            if(bt1 < n - 1) pairs.insert(bt1);
            if(bt2 > 0) pairs.insert(bt2 - 1);
            if(bt2 < n - 1) pairs.insert(bt2);
 
            for(int idx : pairs) k -= contrib(idx);
 
            swap(aa[x], aa[y]);
            swap(a[t1], a[t2]);
 
            for(int idx : pairs) k += contrib(idx);
 
        } else {
            int s1 = bb[x], s2 = bb[y];
 
            set<int> pairs;
            if(x > 0) pairs.insert(x - 1);
            if(x < n - 1) pairs.insert(x);
            if(y > 0) pairs.insert(y - 1);
            if(y < n - 1) pairs.insert(y);
 
            for(int idx : pairs) k -= contrib(idx);
 
            swap(bb[x], bb[y]);
            swap(b[s1], b[s2]);
 
            for(int idx : pairs) k += contrib(idx);
        }
 
        cout << answer() << "
";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}