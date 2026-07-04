#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
 
 
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
    int n;
    cin>>n;
    vector<int> button_weight(n),bb(n);
    map<int,vector<int>> mpp;
    fr(i,n){
        cin>>button_weight[i];
        mpp[button_weight[i]].push_back(i);
    }
    bb = button_weight;
    vector<bool> visited(n,false);
    vector<bool> is_reachable(n,false);
    sort(button_weight.begin(),button_weight.end(),greater<int> ());
    int ans =0;
    set<int> non_inc;
    //fr(i,n)
    int i=0;
    while(i<n){
        int a = button_weight[i];
        for(auto it:mpp[a]){
            if(!visited[it] && !is_reachable[it]){
                ans++;
                //cout<<it<<" "<<a<<endl;
                visited[it]=true;
                is_reachable[it]=true;
                if(it+1<n){
                    is_reachable[it+1]=true;
                    int j=it+2;
                    while(j<n && bb[j]==bb[it+1] && !is_reachable[j]){
                        is_reachable[j]=true;
                        j++;
                    }
                }
                if(it-1>=0){
                    is_reachable[it-1]=true;
                    int j=it-2;
                    while(j>=0 && bb[j]==bb[it-1] && !is_reachable[j]){
                        is_reachable[j]=true;
                        //cout<<j<<" updating connected "<<endl;
                        j--;
                    }
                }
            }
            if(is_reachable[it]){
                visited[it]=true;
                if(it+1<n){
                    is_reachable[it+1]=true;
                    int j=it+2;
                    while(j<n && bb[j]==bb[it+1] && !is_reachable[j]){
                        is_reachable[j]=true;
                        j++;
                    }
                }
                if(it-1>=0){
                    is_reachable[it-1]=true;
                    int j=it-2;
                    while(j>=0 && bb[j]==bb[it-1] && !is_reachable[j]){
                        is_reachable[j]=true;
                        j--;
                    }
                }
            }
        }
        while(i<n && button_weight[i]==a)i++;
        //i--;
    }
    cout<<ans<<endl;
}
 
int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}