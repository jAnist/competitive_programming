/*
Question Link: https://codeforces.com/problemset/problem/1368/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b,n,ans=0,mn,mx,res;
    cin>>a>>b>>n;
    if(a<b){
        mn=a;
        mx=b;
    }else{
        mn=b;
        mx=a;
    }
    while(mx<=n){
        res=mx;
        mx+=mn;
        mn=res;
        ans++;
        //cout<<mx<<" "<<mn<<endl;
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