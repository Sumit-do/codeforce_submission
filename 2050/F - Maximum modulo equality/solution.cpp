#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
vector<int> tree(1e6+1),arr(2e5+1);
 
 
void build(int indx,int l,int r){
    if(l==r){
        tree[indx]=arr[l];
        return;
    }
    int mid=(l+r)/2;
    build(2*indx+1,l,mid);
    build(2*indx+2,mid+1,r);
    tree[indx]=__gcd(tree[indx*2 +1],tree[indx*2+2]);
}
int query(int indx,int l,int r,int ql,int qr){
    //if(ql>qr)return 1;
    if(l==ql && r==qr)return tree[indx];
    int mid=(l+r)/2;
    if(mid<ql){
        return query(2*indx+2,mid+1,r,ql,qr);
    }
    else if((mid+1)>qr){
        return query(2*indx+1,l,mid,ql,qr);
    }
    return __gcd(query(2*indx+1,l,mid,ql,mid),query(2*indx+2,mid+1,r,mid+1,qr));
}
void update(int indx,int l,int r,int target,int new_v){
    int  mid=(l+r)/2;
    if(l==r && l==target){
        arr[target]=new_v;
        tree[indx]=new_v;
        return;
    }
    if(target<=mid){
        update(2*indx+1,l,mid,target,new_v);
    }
    else{
        update(2*indx+2,mid+1,r,target,new_v);
    }
    tree[indx]=__gcd(tree[2*indx+1],tree[2*indx+2]);
}
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> prev(n);
    fr(i,n){
        if(i==0){
            cin>>prev[i];
            arr[i]=1;
        }
        else{
            cin>>prev[i];
            arr[i]=abs(prev[i]-prev[i-1]);
        }
    }
    build(0,0,n-1);
    fr(i,q){
        int l,r;
        cin>>l>>r;
        if(l==r){cout<<0<<" "; continue;}
        //cout<<"**"<<arr[l]<<" "<<arr[r-1]<<"****";
        cout<<query(0,0,n-1,l,r-1)<<" ";
    }
    cout<<endl;
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) solve();
}