/*
Question Link: https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(int m){
    for(int x=m+1;x<10000;x++){
    int flag=0;
    int n=x;
    //cout<<x<<endl;
    vector<int> ar(10,0);
    while(n>0){
        int a = n%10;
        n = n/10;
        ar[a]+=1;
    }
    for(int i=0;i<ar.size();i++){
        if(ar[i]>1){
            flag=1;
            break;
        }
    }
    //cout<<x<<endl;
    if(flag==0){
        cout<<x<<endl;
        return;
    }}
}

int main()
{
   int n;
   cin>>n;
   solve(n);
}