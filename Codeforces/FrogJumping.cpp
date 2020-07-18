/*
Question Link: https://codeforces.com/problemset/problem/1077/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       long long int a,b,k;
       cin>>a>>b>>k;
       long long int ans=0;
       if(k%2==0){
           ans = (k/2)*a - (k/2)*b;
       }else{
           ans = ((k-1)/2)*a - ((k-1)/2)*b +a;
       }
       cout<<ans<<endl;
   }
}