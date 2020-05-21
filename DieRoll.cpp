/*
Question Link: https://codeforces.com/contest/9/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int m;
    if(a>b){
        m=a;
    }else{
        m=b;
    }
    int ans=6-m+1;
    if(ans==1){
        cout<<"1/6"<<endl;
    }else if(ans==2){
        cout<<"1/3"<<endl;
    }else if(ans==3){
        cout<<"1/2"<<endl;
    }else if(ans==4){
        cout<<"2/3"<<endl;
    }else if(ans==5){
        cout<<"5/6"<<endl;
    }else{
        cout<<"1/1"<<endl;
    }
}