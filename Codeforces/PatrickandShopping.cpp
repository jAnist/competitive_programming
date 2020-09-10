/*
Question Link: https://codeforces.com/problemset/problem/599/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int d1,d2,d3,ans=0,mn,mx;
   cin>>d1>>d2>>d3;
   if(d1<d2){
       ans+=d1;
       mn=d1;
       mx=d2;
   }else{
       ans+=d2;
       mn=d2;
       mx=d1;
   }
   if((d1+d2)<d3){
       ans+=(d1+d2);
   }else{
       ans+=d3;
   }
   if((mn+d3)<mx){
       ans+=(mn+d3);
   }else{
       ans+=mx;
   }
   cout<<ans<<endl;
}