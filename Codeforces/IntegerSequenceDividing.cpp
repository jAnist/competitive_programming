/*
Question Link: https://codeforces.com/problemset/problem/1102/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n%4==0)||(n%4==3)){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
}