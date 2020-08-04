/*
Question Link: https://codeforces.com/contest/1334/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int flag=1;
    int a,b;
    cin>>a>>b;
    if(b>a){
        flag=0;
    }
    for(int i=0;i<n-1;i++){
        int p,q;
        cin>>p>>q;
        if(q>p){
            flag=0;
        }
        if(p<a || q<b){
            flag=0;
        }
        if((q-b)>(p-a)){
            flag=0;
        }
        a = p;
        b = q;
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}