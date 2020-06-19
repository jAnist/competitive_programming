/*
Question Link: https://codeforces.com/problemset/problem/1223/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==2){
        cout<<2<<endl;
    }else{
        if(n%2==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
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