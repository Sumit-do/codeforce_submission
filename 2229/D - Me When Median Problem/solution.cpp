#include<bits/stdc++.h>
using namespace std;
 
bool check(int mid, vector<int>& a, vector<int>& b) {
    int n = a.size();
    int count_2 = 0, count_0 = 0;
    bool in_zero = false;
    
    for (int i = 0; i < n; i++) {
        int f = (a[i] >= mid) + (b[i] >= mid);
        
        if (f == 2) {
            count_2++;
            in_zero = false; 
        } else if (f == 0) {
            if (!in_zero) {
                count_0++;
                in_zero = true; 
            }
        }
    }
    return count_2 > count_0;
}
 
void solve() { 
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    int min_val = INT_MAX, max_val = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        min_val = min(min_val, b[i]);
        max_val = max(max_val, b[i]);
    }
    
    int i = min_val, j = max_val + 1;  
    int ans = -1;
    
    while(i <= j) {
        int mid = i + (j - i) / 2;
        if(check(mid, a, b)) {
            ans = mid;
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    cout << ans << "
";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}