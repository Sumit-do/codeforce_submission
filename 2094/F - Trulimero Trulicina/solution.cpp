#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define fr(i,n) for(int i=0;i<n;i++)
 
void solve() {
   int n,m,k;
   cin>>n>>m>>k;
   vector<vector<int>> mat(n,vector<int> (m));
   if(n%k!=0){
    int l=k;
    fr(j,m){
        fr(i,n){
            mat[i][j]=(l%k)+1;
            l++;
        }
    }
   }
   else if(m%k!=0){
        int l=k;
    fr(i,n){
        fr(j,m){
            mat[i][j]=(l%k)+1;
            l++;
        }
    }
   }
   else{
    fr(i,n){
        fr(j,m){
            mat[i][j]=(j+i)%k+1;
        }
    }
   }
   /*else if(n!=k && m!=k){
    if(m!=k){
        int l=k;
        fr(i,n){
            fr(j,m){
                if(i%2==0){
                    mat[i][j]=(j)%k+1;
                }
                else{
                    mat[i][j]=(k-j)%k+1;
                }
            }
        }
    }
    else{
 
    }
   }
   else{
    //int l=k;
    fr(i,n){
        fr(j,m){
            if(k%2==1 && i%2==0){
                if(j==0 || j==k/2){
                    if(j==0)mat[i][j]=k/2+1;
                    if(j==k/2)mat[i][j]=1;
                    continue;
                }
            }
            if(i%2==0){
                mat[i][j]=j+1;
                //cout<<"l1"<<endl;
            }
            else{
                mat[i][j]=k-j;
                //cout<<"l2"<<endl;
            }
        }
    }
   }*/
   fr(i,n){
    fr(j,m)cout<<mat[i][j]<<" ";
    cout<<endl;
   }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}