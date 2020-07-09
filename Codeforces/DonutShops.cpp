/*
Question Link: https://codeforces.com/contest/1373/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<c){
        cout<<1<<" ";
    }else{
        cout<<-1<<" ";
    }
    if(c<(a*b)){
        cout<<b<<endl;
    }else{
        cout<<-1<<endl;
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