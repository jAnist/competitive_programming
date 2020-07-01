/*
Question Link: https://codeforces.com/problemset/problem/540/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,ans=0;
   cin>>n;
   string s1,s2;
   cin>>s1>>s2;
   int a,mx,mn;
   for(int i=0;i<n;i++){
       if((int)s1[i]>(int)s2[i]){
           mx=(int)s1[i];
           mn=(int)s2[i];
       }else{
           mn=(int)s1[i];
           mx=(int)s2[i];
       }
       a = mx-mn;
       if(a<=5){
           ans+=a;
       }else{
           ans+=(10-a);
       }
   }
   cout<<ans<<endl;
}