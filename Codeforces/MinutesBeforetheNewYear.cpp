/*
Question Link: https://codeforces.com/problemset/problem/1283/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int a,b,rem,q,ans;
       cin>>a>>b;
       rem = 60-b;
       q = 24-(a+1);
       ans = (q*60)+rem;
       cout<<ans<<endl;
   }
}