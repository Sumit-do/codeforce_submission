#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve(){
    int n,m,l;
    cin>>n>>m>>l;
    int k=1;
    vector<pair<int,int>> vec(n); 
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec[i].first=a;
        vec[i].second=b;
    }
    vector<pair<int,int>> jump(m);
    int j=0;
    priority_queue<int> q;
    int ans_y=0;
    fr(i,m){
        cin>>jump[i].first>>jump[i].second;
        int xi=jump[i].first,vi=jump[i].second;
        while(j<n && vec[j].first<xi){
            int l1 = vec[j].first,rr=vec[j].second;
            int to_jump = rr-l1+2;
            if(to_jump>k){
                while(!q.empty() && k<to_jump){
                    int temp = q.top();q.pop();
                    k+=temp;
                    ans_y++;
                }
                if(q.empty() && k<to_jump){
                    for(int j=i+1;j<m;j++)cin>>k>>k;
                    cout<<-1<<endl;
                    return;
                }
            }
            j++;
        }
        q.push(vi);
    }
    while(j<n){
            int l1 = vec[j].first,rr=vec[j].second;
            int to_jump = rr-l1+2;
            if(to_jump>k){
                while(!q.empty() && k<to_jump){
                    int temp = q.top();q.pop();
                    k+=temp;
                    ans_y++;
                }
                if(q.empty() && k<to_jump){
                    //for(int j=i+1;j<m;j++)cin>>k>>k;
                    cout<<-1<<endl;
                    return;
                }
            }
            j++;
    }
    cout<<ans_y<<endl;
}
 
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}