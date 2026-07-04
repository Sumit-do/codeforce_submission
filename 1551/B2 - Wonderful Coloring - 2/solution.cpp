#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    fr(i,n)cin>>a[i];
    map<int,int> freq;
    fr(i,n)freq[a[i]]++;
    map<int,vector<int>> freq1;
    fr(i,n)freq1[freq[a[i]]].push_back(a[i]);
    //finding wethher i can print after less k freq elements;
    int tot=0;
    fr(i,n){
        if(freq[a[i]]<k)tot++;
    }
    if(tot/k>=1){
        map<int,int> mpp;
        fr(i,n){
            if(freq[a[i]]<k)mpp[a[i]]++;
        }
        int to_do=(tot/k)*k;
        map<int,queue<int>> mpp1;
        int curr_colour=0;
        bool flag = false;
        for(auto it:mpp){
            int elem=it.first;
            int num=it.second;
            if(flag)break;
            fr(j,num){
                mpp1[elem].push(curr_colour%k + 1 );
                curr_colour++;
                if(curr_colour==to_do){
                    flag = true;
                    break;
                }
            }
        }
        vector<int> vec(n+1,1);
        fr(i,n){
            if(freq[a[i]]<k){
                //////
                if(!mpp1[a[i]].empty()){
                    int indx = mpp1[a[i]].front();mpp1[a[i]].pop();
                    cout<<indx<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            else{
                if(vec[a[i]]<=k)cout<<vec[a[i]]++<<" ";
                else cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    else{
        vector<int> vec(n+1,1);
        fr(i,n){
            if(freq[a[i]]<k)cout<<0<<" ";
            else{
                if(vec[a[i]]<=k)cout<<vec[a[i]]++<<" ";
                else cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}