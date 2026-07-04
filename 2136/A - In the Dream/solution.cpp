#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
// Use long long for the operation count and array elements to prevent overflow,
// as the values and sum can be very large.
#define ll long long int
void solve() {
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int m=min(a,b);
   int m1=max(a,b);
   if((m+1)*2 < m1){
    cout<<"NO
";
    return ;
   }
   c -= a;
   d -= b;
   m = min(c,d);
   m1=max(c,d);
   if((m+1)*2 < m1){
    cout<<"NO
";
    return ;
   }
   cout<<"YES
";
 
}
 
int main() {
    // Fast I/O for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}