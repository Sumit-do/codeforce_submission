#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
 
void solve()
{
    int n;
    cin>>n;
    int x=0;
    if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
        return;
    }
    for(int i=1;i<=(n-3);i++){
        cout<<i<<" ";
        x ^= i;
    }
    if((x^(n-2))!=0){
        cout<<(n-2)<<" "<<(1<<30)<<" "<<((1<<30)^(x^(n-2)))<<endl;
    }
    else{
        cout<<(1<<25)<<" "<<(1<<30)<<" "<<(x^(1<<25)^(1<<30))<<endl;
    }
 
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}