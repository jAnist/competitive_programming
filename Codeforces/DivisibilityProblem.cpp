/*
Question Link: https://codeforces.com/problemset/problem/1328/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int s = n%m;
        if(s==0){
            cout<<0<<endl;
        }else{
            cout<<(m-s)<<endl;
        }
    }
}