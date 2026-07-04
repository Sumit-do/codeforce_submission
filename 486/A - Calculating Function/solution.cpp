#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin>>n;
    if((n%2)==0) {
        cout<<n/2;
    }
    else{
        cout<<(n/2 - n);
    }
    // your code here
 
    return 0;
}