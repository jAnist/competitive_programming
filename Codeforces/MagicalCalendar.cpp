/*
Question Link: https://codeforces.com/problemset/problem/1371/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,r,mn;
    long long int ans=0;
    cin>>n>>r;
    if(n<r){
        mn=n;
    }else{
        mn=r;
    }
    ans=((mn-1)*mn)/2;
    if(mn==n){
        cout<<ans+1<<endl;
    }else{
        cout<<ans+mn<<endl;
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