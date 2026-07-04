#include<bits/stdc++.h>
 
using namespace std;
 
 
 
 
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> d_v,r_v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            r_v.push_back(i);
        }
        else{
            d_v.push_back(i);
        }
    }
    long long i=0;
    char rr = '*';
    while(1){
        if(s[i%n]!='o'){
            if(s[i%n]=='D'){
                if(r_v.empty()){
                    rr = 'D';
                    goto end;
                }
                
                auto it = lower_bound(r_v.begin(),r_v.end(),i%n);
                int indx = it - r_v.begin();
                if(indx>(r_v.size()-1)){
                    s[r_v.front()]='o';
                    r_v.erase(r_v.begin());
                }
                else{
                    s[r_v[indx]]='o';
                    r_v.erase(r_v.begin()+indx);
                }
            }
            else{
                if(d_v.empty()){
                    rr = 'R';
                    goto end;
                }
                auto it = lower_bound(d_v.begin(),d_v.end(),i%n);
                int indx = it - d_v.begin();
                if(indx>(d_v.size()-1)){
                    s[d_v.front()]='o';
                    d_v.erase(d_v.begin());
                }
                else{
                    s[d_v[indx]]='o';
                    d_v.erase(d_v.begin()+indx);
                }
            }
            i++;
        }
        else{
            i++;
        }
    }
    end:
    cout<<rr<<'
';
    return 0;
}