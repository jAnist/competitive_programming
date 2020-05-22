/*
Question Link: https://codeforces.com/problemset/problem/935/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if((n-i)%i==0){
            ans=ans+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}