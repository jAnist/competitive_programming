/*
Question Link: https://codeforces.com/problemset/problem/155/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,mx,mn,ans=0;
   cin>>n;
   cin>>x;
   mx=x;
   mn=x;
   for(int i=0;i<n-1;i++){
       cin>>x;
       if(x>mx){
           ans++;
           mx=x;
       }
       if(x<mn){
           ans++;
           mn=x;
       }
   }
   cout<<ans<<endl;
}