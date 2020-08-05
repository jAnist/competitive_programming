/*
Question Link: https://codeforces.com/problemset/problem/1371/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans;
    cin>>n;
    ans=n/2;
    if(n==0){
        cout<<1<<endl;
    }else{
        if(n%2==0){
            cout<<ans<<endl;
        }else{
            cout<<ans+1<<endl;
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