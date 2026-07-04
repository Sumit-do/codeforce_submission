#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
// Using the standard namespace as is common in competitive programming
using namespace std;
 
/**
 * @brief This function is transcribed from the provided image.
 * * It reads an array of integers, counts the frequency of each number,
 * and then calculates a result based on the frequencies of the unique
 * elements in sorted order.
 */
void solve() {
    int n;
    cin >> n;
 
    vector<int> vec(n);
    map<int, int> mpp; // To store frequency of each element
    set<int> b;        // To store unique elements in sorted order
 
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        mpp[vec[i]]++;       // Increment the count for this element
        b.insert(vec[i]);
        b.insert(vec[i]+1);// Add the element to the set of unique values
    }
 
    int res = 0;
    int l = 0; // Stores the frequency of the previously processed unique element
 
    // Iterate through the unique elements in sorted order
    for (auto it : b) {
        int c = mpp[it]; // Get the frequency of the current element
        
        // Add the increase in frequency compared to the previous element to the result
        res += max(0, c - l);
        
        l = c; // Update 'l' to the current frequency for the next iteration
    }
 
    cout << res << endl;
}
 
int main() {
    // Fast I/O for performance
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
 
    // Call the solve function to run the logic
   // solve();
 
    // The code can be easily modified for multiple test cases like this:
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
 
    return 0;
}