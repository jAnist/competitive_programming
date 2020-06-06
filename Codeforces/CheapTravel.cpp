/*
Question Link: https://codeforces.com/problemset/problem/466/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   int ans1,ans2,ans3;
   ans1 = n*a;
   int x = n/m;
   ans2 = x*b + (n%m)*a;
   ans3 = (x+1)*b;
   if(ans1>ans2){
       if(ans3>ans2){
           cout<<ans2<<endl;
       }else{
           cout<<ans3<<endl;
       }
   }else{
       if(ans3>ans1){
           cout<<ans1<<endl;
       }else{
           cout<<ans3<<endl;
       }
   }
}