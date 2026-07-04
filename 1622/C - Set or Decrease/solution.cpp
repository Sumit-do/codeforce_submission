#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
void solve() {
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> vec(n);
    ll sum1=0;
    fr(i,n){
        cin>>vec[i];
        sum1+=vec[i];
    }
    sort(vec.begin(),vec.end());
    ll i=0,j=1e15;
    vector<ll> back(n);
    back[n-1]=vec[n-1]-vec[0];
    for(int i=n-2;i>0;i--){
        back[i]=back[i+1]+vec[i]-vec[0];
    }
    ll ans=0;
    if(sum1<=k)return void(cout<<0<<endl);
    ans = sum1-k;
 
    while(i<=j){
        ll mid = i + (j-i)/2;
        ll sum=sum1;
        ll diff = sum-k;
        ll ii=1;
        bool ha=false;
        if(diff<=mid){
            j=mid-1;
            //cout<<ans<<endl;
            ans=mid;
            continue;
        }
        for(int yu=n-1;yu>0;yu--){
            //cout<<mid<<" "<<ii<<" "<<"uu"<<endl;
            ii++;
            if(ii>mid)break;
            //cout<<mid<<" "<<ii<<" "<<"uuiii"<<endl;
            ll rr=(ll)(ii)*(mid-ii+1)+back[yu];
            if(rr>=diff){
                ha=true;
                //cout<<mid<<" "<<rr<<" "<<ii<<" "<<"uuiiixxx"<<endl;
                break;
            }
        }
        //cout<<mid<<" "<<i<<" "<<j<<endl;
        if(ha){
            j=mid-1;
            ans = mid;
        }
        else{
            i=mid+1;
        }
    }
    int count=0;
    for(int i=n-1;i>0;i--){
        count++;
        if((sum1-back[i])<=k)ans=min(ans,(ll)count);
    }
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}