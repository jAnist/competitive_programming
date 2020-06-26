/*
Question Link: https://codeforces.com/problemset/problem/1006/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2!=0){
            cout<<x<<" ";
        }else{
            cout<<(x-1)<<" ";
        }
    }cout<<endl;
}