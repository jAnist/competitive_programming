/*
Question Link: https://codeforces.com/contest/1388/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n;
    cin>>n;
    if(n<=30){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        if(n==36){
            cout<<"6 10 15 5"<<endl;
        }else if(n==40){
            cout<<"6 10 15 9"<<endl;
        }else if(n==44){
            cout<<"6 10 7 21"<<endl;
        }else{
            cout<<"6 10 14 "<<(n-30)<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}