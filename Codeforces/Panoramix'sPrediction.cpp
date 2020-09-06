/*
Question Link: https://codeforces.com/problemset/problem/80/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,fg;
    cin>>n>>m;
    for(i=n+1;i<=m;i++){
        fg=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                fg=1;
            }
        }
        if(fg==0){
            break;
        }
    }
    if(i==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}