/*
Question Link: https://codeforces.com/problemset/problem/1353/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    long long int ans=2*m;
    if(n==1){
        cout<<0<<endl;
    }else if(n==2){
        cout<<m<<endl;
    }else{
        cout<<ans<<endl;
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