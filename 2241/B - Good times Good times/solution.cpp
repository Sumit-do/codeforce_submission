#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x;
        scanf("%lld", &x);
 
    
        int k = 0;
        long long tmp = x;
        while (tmp > 0) {
            k++;
            tmp /= 10;
        }
 
        long long y = 1;
        for (int i = 0; i < k; i++) y *= 10;
        y += 1;
 
        printf("%lld
", y);
    }
    return 0;
}