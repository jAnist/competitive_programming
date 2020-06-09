/*
Question Link: https://codeforces.com/problemset/problem/467/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int ans=0;
   while(t--){
       int a,b;
       cin>>a>>b;
       if((b-a)>=2){
           ans+=1;
       }
   }
   cout<<ans<<endl;
}