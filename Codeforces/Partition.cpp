/*
Question Link: https://codeforces.com/problemset/problem/946/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,ans=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;
       if(x>=0){
           ans+=x;
       }else{
           ans-=x;
       }
   }
   cout<<ans<<endl;
}