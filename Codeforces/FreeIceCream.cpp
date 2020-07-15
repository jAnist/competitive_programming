/*
Question Link: https://codeforces.com/problemset/problem/686/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll int n,x,d,s=0;
   char c;
   cin>>n>>x;
   while(n--){
       cin>>c>>d;
       if(c=='+'){
           x+=d;
       }else{
           if(x>=d){
               x-=d;
           }else{
               s++;
           }
       }
   }
   cout<<x<<" "<<s<<endl;
}