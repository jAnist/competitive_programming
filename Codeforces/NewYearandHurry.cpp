/*
Question Link: https://codeforces.com/problemset/problem/750/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,ans=0;
   cin>>n>>k;
   int rem = 240-k;
   for(int i=1;i<=n;i++){
       rem-=(5*i);
       if(rem>=0){
           ans++;
       }else{
           break;
       }
   }
   cout<<ans<<endl;
}