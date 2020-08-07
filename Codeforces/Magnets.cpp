/*
Question Link: https://codeforces.com/problemset/problem/344/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,y,ans=1;
   cin>>n;
   cin>>x;
   for(int i=0;i<n-1;i++){
       cin>>y;
       if(x!=y){
           ans+=1;
       }
       x=y;
   }
   cout<<ans<<endl;
}