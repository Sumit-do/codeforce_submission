#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
// FIXED: Moved outside solve() to stop bad_alloc
int vis[200005];
int timer = 0;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    vector<int> freq(n + 1, 0);
    fr(i, n) {
        cin >> vec[i];
        if (vec[i] <= n) freq[vec[i]]++;
    }
 
    int i = 0, j = n;
    
    while (i <= j) {
        int x = i + (j - i) / 2;
        
        if (x == 0) {
            if (freq[0] == 0) {
                cout << 0 << endl;
                return;
            }
            if (freq[0] >= k) {
                cout << 1 << endl;
                return;
            }
            cout << 0 << endl;
            return;
        }
 
        int ptr = 0;
        int kn = 0;
        while (ptr < n) {
            int curr_mex = 0;
            timer++; 
            
            while (curr_mex < x && ptr < n) {
                if (vec[ptr] <= n) vis[vec[ptr]] = timer;
                while (vis[curr_mex] == timer) curr_mex++;
                ptr++;
            }
            if (curr_mex >= x) kn++;
        }
 
        if (kn < k) {
            j = x - 1;
        } else {
            i = x + 1;
        }
    }
    cout << (i + j) / 2 << endl;
}
 
int main() {
    fast_io; // Added to ensure I/O doesn't hit memory/time limits
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}