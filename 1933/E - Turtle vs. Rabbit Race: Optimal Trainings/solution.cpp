#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    fr(i,n)cin>>a[i];
    vector<ll> pre_sum(n);
    pre_sum[0]=a[0];
    for(int i=1;i<n;i++)pre_sum[i]=pre_sum[i-1]+a[i];
 
    int q;
    cin>>q;
    
    fr(i,q){
        int l,u;
        cin>>l>>u;
        
        // 1. Calculate the exact target prefix sum
        // We want Subarray Sum ≈ u.
        // Target Prefix Sum = (Sum of elements before l) + u
        ll pre_l = pre_sum[l-1] - a[l-1]; 
        ll y = u + pre_l;
        
        // 2. Search ONLY from index l-1 onwards (valid subarrays must start at l)
        auto it = lower_bound(pre_sum.begin() + l - 1, pre_sum.end(), y);
 
        // Case: All prefix sums are smaller than target -> closest is the last element
        if(it == pre_sum.end()){
            cout << n << " ";
            continue;
        }
        
        // Case: The first valid prefix sum is already >= target -> no "left" neighbor to check
        if(it == pre_sum.begin() + l - 1){
            cout << l << " ";
            continue;
        }
 
        // 3. Compare neighbors
        // a1 is the sum of the subarray ending at (it-1)
        // a2 is the sum of the subarray ending at (it)
        ll a1 = (*(it-1)) - pre_l;
        ll a2 = (*(it)) - pre_l;
        
        // 4. Tie-Breaker Logic
        // We use '>=' because if distances are equal (ties), we prefer the 
        // Right side (a2, the longer subarray).
        if((u - a1) >= (a2 - u)) cout << (it - pre_sum.begin() + 1) << " ";
        else cout << (it - pre_sum.begin()) << " ";
    }
    cout<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}