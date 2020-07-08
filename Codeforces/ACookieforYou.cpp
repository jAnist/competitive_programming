/*
Question Link: https://codeforces.com/problemset/problem/1371/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b,n,m,mn;
    cin>>a>>b>>n>>m;
    if((a+b)<(n+m)){
        cout<<"No"<<endl;
    }else{
        if(a<b){
            mn=a;
        }else{
            mn=b;
        }
        if(mn>=m){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}