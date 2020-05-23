/*
Question Link: https://codeforces.com/problemset/problem/427/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int y=0,ans=0;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if((y+x)>=0){
           y=y+x;
       }else{
           ans+=1;
       }
       //cout<<y<<" "<<ans<<endl;
   }
   cout<<ans<<endl;
}