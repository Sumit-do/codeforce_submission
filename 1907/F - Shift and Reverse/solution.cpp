#include <bits/stdc++.h>
 
using namespace std;
 
bool check_inc(long long array[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}
 
bool check_dic(long long array[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        if (array[i] < array[i + 1]) {
            return false;
        }
    }
    return true;
}
 
int freq_fall(long long array[], int n) {
    int fall = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > array[(i + 1) % n]) {
            fall++;
        }
    }
    return fall;
}
 
int ind_freq_fall(long long array[], int n) {
    int fall = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > array[(i + 1) % n]) {
            fall = i;
        }
    }
    return fall;
}
 
int ind_freq_jump(long long array[], int n) {
    int jump = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < array[(i + 1) % n]) {
            jump = i;
        }
    }
    return jump;
}
 
int freq_jump(long long array[], int n) {
    int jump = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < array[(i + 1) % n]) {
            jump++;
        }
    }
    return jump;
}
 
long long f1(long long array[], int n) {
    if (check_inc(array, n)) {
        return 0;
    }
    int fell = freq_fall(array, n);
    if (fell == 1) {
        int fell_indices = ind_freq_fall(array, n);
        return min((fell_indices + 1) + 2, n - (fell_indices + 1));
    }
    return INT_MAX;
}
 
long long f2(long long array[], int n) {
    if (check_dic(array, n)) {
        return 1;
    }
    int jump = freq_jump(array, n);
    if (jump == 1) {
        int jump_indices = ind_freq_jump(array, n);
        return min((jump_indices + 1) + 1, n - (jump_indices + 1) + 1);
    }
    return INT_MAX;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long array[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        long long ways_incre = f1(array, n);
        long long ways_decre = f2(array, n);
        long long result = min(ways_decre, ways_incre);
        if (result < INT_MAX) {
            cout << result << '
';
        } else {
            cout << -1 << '
';
        }
    }
    return 0;
}