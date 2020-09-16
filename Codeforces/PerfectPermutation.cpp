/*
Question Link: https://codeforces.com/problemset/problem/233/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t%2==0){
        for(int i=0;i<(t/2);i++){
            cout<<(2*i)+2<<" "<<(2*i)+1<<" ";
        }cout<<endl;
    }else{
        cout<<-1<<endl;
    }
}