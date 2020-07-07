/*
Question Link: https://www.codechef.com/JUNE20B/problems/EOEO
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    while(n%2!=1){
        n = n/2;
    }
    cout<<(n/2)<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}