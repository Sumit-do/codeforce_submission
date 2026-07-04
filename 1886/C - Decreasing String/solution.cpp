#include<bits/stdc++.h>
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
using namespace std;
 
#include <iostream>
#include <vector>
 
using namespace std;
 
 
#define ll long long
 
typedef struct node{
    char c;
    struct node * prev;
    
    struct node * next;
} N ;
 
N * creat(char d){
    N * neww = (N*)malloc(sizeof(N));
    neww->c=d;
    neww->prev=NULL;
    neww->next=NULL;
    return neww;
}
 
 
void solve(){
    string s;
    cin>>s;
    ll pos;
    cin>>pos;
    ll pos1=pos;
    int lam=0,test=s.size();
    while(pos-test >= 0 && pos>0){
        pos -= test;
        test--;
        lam++;
        if(pos==0){
            lam--;
            pos=s.size()-lam;
            break;
        }
    }
    stack<char> ss;
    for(auto c:s){
        while(lam>0 && !ss.empty() && ss.top() > c){
            ss.pop();
            lam--;
        }
        ss.push(c);
    }
    int dd = ss.size()-pos +1;
    while(dd--){
        if(dd==0){
            cout<<ss.top();
        }
        ss.pop();
    }
}
 
 
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    cout<<endl;
    return 0;
}