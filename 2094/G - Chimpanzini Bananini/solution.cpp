#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int q;cin>>q;
    long long curr_sum=0;
    long long linear_sum=0;
    long long  size=0;
    long long side=0;
    deque<long long> qq;
    while(q--){
        int s;cin>>s;
        long long k;
        if(s==3){
            cin>>k;
            size++;
            curr_sum+=((long long)(size)*k);
            linear_sum+=k;
            if(side)qq.push_front(k);
            else qq.push_back(k);
            cout<<curr_sum<<"
";
        }
        else if(s==1){
            long long yy;
            if(side){
                yy=qq.front();qq.pop_front();
                qq.push_back(yy);
            }
            else{
                yy=qq.back();qq.pop_back();
                qq.push_front(yy);
            }
            long long ans = curr_sum+linear_sum-(size)*yy;
            cout<<ans<<"
";
            curr_sum=ans;
        }
        else{
            side=1-side;
            long long ans = (size+1)*linear_sum-curr_sum;
            curr_sum=ans;
            cout<<ans<<"
";
        }
    }
}
 
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}