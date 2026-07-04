#include<bits/stdc++.h>
using namespace std;
#define N 200005 
struct Node {
    int x, y, i;
 
    bool operator<(const Node &other) const {
        return x<other.x ;
    }
} a[200005];
 
void solve(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int aa,b;
        cin>>aa>>b;
        a[i].x=aa,a[i].y=b,a[i].i=i;
    }
    sort(a ,a + n);
    pair<int,int> b[n/2],c[n/2];
    for(int i=0;i<n/2;i++){
        b[i].first=a[i].y;
        b[i].second=a[i].i;
    }
    for(int i=n/2;i<n;i++){
        c[i-n/2].first=a[i].y;
        c[i-n/2].second=a[i].i;
    }
    sort(b,b+n/2);
    sort(c,c+n/2);
    for(int i=0;i<n/2;i++){
        cout<<b[i].second+1<<" "<<c[n/2-1-i].second+1<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}