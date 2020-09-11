/*
Question Link: https://codeforces.com/problemset/problem/1256/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll m;
    m = s/n;
    if(m>a){
        if(b<(s-(a*n))){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        if(b<(s-(m*n))){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}

int main()
{
   int q;
   cin>>q;
   while(q--){
       solve();
   }
}