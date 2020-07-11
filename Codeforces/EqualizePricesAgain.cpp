/*
Question Link: https://codeforces.com/problemset/problem/1234/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,x,sm=0,ans=0;
       cin>>n;
       for(int i=0;i<n;i++){
           cin>>x;
           sm+=x;
       }
       if(sm%n==0){
           ans=sm/n;
       }else{
           ans=sm/n+1;
       }
       cout<<ans<<endl;
   }
}