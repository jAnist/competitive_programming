/*
Question Link: https://codeforces.com/problemset/problem/749/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        int m=n/2;
        cout<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<2<<" ";
        }cout<<endl;
    }else{
        int m = n-3;
        int x = 1+(m/2);
        cout<<x<<endl;
        cout<<3<<" ";
        for(int i=0;i<(m/2);i++){
            cout<<2<<" ";
        }cout<<endl;
    }
}

int main()
{
   solve();
}