/*
Question Link: https://codeforces.com/contest/1348/problem/A
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t,n;
    long long int res;
    cin>>t;
    while(t--){
        cin>>n;
        res = (int)(pow(2,n));
        for(int i=1;i<=(n/2)-1;i++){
            res = res+(int)(pow(2,i));
        }
        for(int i=n/2;i<n;i++){
            res=res-(int)(pow(2,i));
        }
        cout<<res<<endl;
    }
}