#include<bits/stdc++.h>
using namespace std;
 
// Using standard C++ long double. This is the maximum precision without external libraries.
#define FLOAT_TYPE long double
 
// Use the standard long long type for integers
#define ll long long
 
void solve(){
    int n;
    FLOAT_TYPE k; // Still long double
    
    // Use fast I/O but ensure input is read into long double
    cin >> n >> k;
    
    vector<FLOAT_TYPE> vec(n); // Vector elements are long double
    for(int i = 0; i < n; i++) cin >> vec[i];
    
    FLOAT_TYPE sum = 0.0L; // Initialize sum with a long double literal (0.0L)
    vector<FLOAT_TYPE> sumd(n);
    sumd[0]=vec[0];
    for(int i=1;i<n;i++){
      sumd[i] = vec[i]+sumd[i-1];
    }
    // *** CRITICAL CHANGE: Loop counter 'i' MUST be an integer (int) for correct array indexing. ***
    // This is a correction of an anti-pattern, not a logical change to your algorithm.
    /*for(int i = 0; i < n; i++){
        
        // Use 1.0L and 2.0L to ensure comparisons and arithmetic use long double precision
        if((i + 1.0L) <= k){
            sum += (i + 1.0L) * vec[i];
        }
        else if((i + 1.0L) < (n - k + 2.0L)){
            sum += k * vec[i];
        }
        else{
            // ghtna = (i+1) - (n-k+1)
            FLOAT_TYPE ghtna = (i + 1.0L) - (n - k + 1.0L); 
            sum += (k - ghtna) * vec[i];
        }
    }*/
    for(int i=0;i<(n-k+1);i++){
        sum += (sumd[i+k-1]-sumd[i]+vec[i]);
    }
    
    // Divisor is (n - k + 1.0L)
    sum /= (n - k + 1.0L);
    
    // *** PRECISION BOOST: Maximize output precision ***
    // std::fixed ensures fixed-point notation
    // std::setprecision(18) is the common maximum for long double (usually 18-19 digits)
    cout << fixed << setprecision(18) << sum << endl;
}
 
// ... (main function remains the same)
int main(){
    // Use cin.tie(0)->sync_with_stdio(0); if you need extremely fast I/O
    int t=1;
    //cin>>t; 
    while(t--) solve();
    return 0;
}