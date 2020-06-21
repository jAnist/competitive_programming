/*
Question Link: https://codeforces.com/problemset/problem/144/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,mn=200,mx=0,mxi,mni,ans=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;
       if(x>mx){
           mx=x;
           mxi=i+1;
       }
       if(x<=mn){
           mn=x;
           mni=i+1;
       }
   }
   if(mxi<mni){
       ans=mxi-1+(n-mni);
   }else{
       ans=mxi-1+(n-mni)-1;
   }
   cout<<ans<<endl;
}