/*
Question Link: https://codeforces.com/problemset/problem/1372/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n,x,flag=0,l=-1,r=-1,cnt=0;
    cin>>n;
    vec eq;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==(i+1)){
            eq.pb(i);
            cnt++;
        }else{
            if(flag==0){
                l=i;
                flag++;
            }else{
                r=i;
            }
        }
    }
    cnt=cnt-l-(n-r-1);
    if(l==-1){
        cout<<0<<endl;
    }else{
        if((r-l)==1){
            cout<<1<<endl;
        }else{
            if(cnt==0){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}