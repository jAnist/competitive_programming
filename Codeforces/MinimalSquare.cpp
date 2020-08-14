/*
Question Link: https://codeforces.com/problemset/problem/1360/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int mn,mx;
    if(a>b){
        mx = a;
        mn = b;
    }else{
        mx=b;
        mn=a;
    }
    int ans;
    if(mx>(2*mn)){
        ans=mx*mx;
    }else{
        ans=4*mn*mn;
    }
    cout<<ans<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}