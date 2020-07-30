/*
Question Link: https://codeforces.com/contest/1388/problem/B
*/

// g++ -o run run.cpp&run.exe

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n,m,x;
    cin>>n;
    m = n/4;
    x = n%4;
    if(x==0){
        for(int i=0;i<(n-m);i++){
            cout<<'9';
        }
        for(int i=0;i<m;i++){
            cout<<'8';
        }
        cout<<endl;
    }else{
        for(int i=0;i<(n-m-1);i++){
            cout<<'9';
        }
        for(int i=0;i<m+1;i++){
            cout<<'8';
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}