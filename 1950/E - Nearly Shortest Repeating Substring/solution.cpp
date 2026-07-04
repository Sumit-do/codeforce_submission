#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int x=i,k=n/i;
            map<string,int> mpp;
            for(int j=0;j<n;j+=k){
                string g = s.substr(j,k);
                mpp[g]++;
            }
            if(mpp.size()==1)ans=min(ans,k);;
            if(mpp.size()==2){
                vector<string> ss;
                vector<int> vv;
                for(auto it:mpp){
                    ss.push_back(it.first);
                    vv.push_back(it.second);
                }
                if(vv[0]==1 || vv[1]==1){
                    string s1=ss[0],s2=ss[1];
                    int crime=0;
                    fr(o,k){
                        if(s1[o]!=s2[o])crime++;
                    }
                    if(crime==1)ans=min(ans,k);
                }
                
            }
            ////
            k=i;
            mpp.clear();
            for(int j=0;j<n;j+=k){
                string g = s.substr(j,k);
                mpp[g]++;
            }
            /*for(auto it:mpp){
                cout<<it.first<<" "<<it.second<<endl;
                cout<<k<<endl;
            }*/
            if(mpp.size()==1)ans=min(ans,k);
            if(mpp.size()==2){
                vector<string> ss1;
                vector<int> vv1;
                for(auto it:mpp){
                    ss1.push_back(it.first);
                    vv1.push_back(it.second);
                }
                if(vv1[0]!=1 && vv1[1]!=1)continue;
                string s1=ss1[0],s2=ss1[1];
                int crime=0;
                fr(o,k){
                    if(s1[o]!=s2[o])crime++;
                }
                if(crime==1)ans=min(ans,k);
            }
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}