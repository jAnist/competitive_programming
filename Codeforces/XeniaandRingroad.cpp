/*
Question Link: https://codeforces.com/problemset/problem/339/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   long long int ans;
   int y;
   cin>>y;
   ans=(y-1);
   for(int i=0;i<m-1;i++){
       int x;
       cin>>x;
       if(y<=x){
           ans+=(x-y);
       }else{
           ans+=(n-y+x);
       }
       y = x;
   }
   cout<<ans<<endl;
}