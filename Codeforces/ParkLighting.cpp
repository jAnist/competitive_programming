/*
Question Link: https://codeforces.com/problemset/problem/1358/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,ans;
    cin>>n>>m;
    int x = (n*m)%2;
    if(x==0){
        ans = (n*m)/2;
    }else{
        ans = (n*m)/2+1;
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