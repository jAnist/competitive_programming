/*
Question Link: https://codeforces.com/problemset/problem/451/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ch=0;
    cin>>n>>m;
    int d = n*m;
    while(d>0){
        ch+=1;
        d = (m-1)*(n-1);
        n-=1;
        m-=1;
    }
    if(ch%2!=0){
        cout<<"Akshat"<<endl;
    }else{
        cout<<"Malvika"<<endl;
    }
}