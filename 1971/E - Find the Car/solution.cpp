#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    
    // Create vectors of size k+1 to include the starting point (0,0)
    vector<ll> a(k + 1);
    vector<ll> b(k + 1);
    
    a[0] = 0; // Start distance
    b[0] = 0; // Start time
    
    for(int i = 1; i <= k; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cin >> b[i];
    
    fr(i, q){
        int d;
        cin >> d;
        
        // Find the first checkpoint >= d
        // We use lower_bound on the distance vector
        int idx = lower_bound(a.begin(), a.end(), d) - a.begin();
        
        // If d is exactly one of the checkpoints
        if(a[idx] == d){
            cout << b[idx] << " ";
            continue;
        }
        
        // The car is between index (idx-1) and (idx)
        // Interval: [prev_dist, curr_dist]
        ll prev_dist = a[idx - 1];
        ll curr_dist = a[idx];
        ll prev_time = b[idx - 1];
        ll curr_time = b[idx];
        
        ll dist_segment = curr_dist - prev_dist;
        ll time_segment = curr_time - prev_time;
        
        ll dist_traveled_in_segment = d - prev_dist;
        
        // Calculate added time using integer arithmetic
        // (partial_dist * total_time) / total_dist
        // This automatically rounds DOWN (floor)
        ll added_time = (dist_traveled_in_segment * time_segment) / dist_segment;
        
        cout << prev_time + added_time << " ";
    }
    cout << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}