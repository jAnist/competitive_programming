/*
Question Link: https://codeforces.com/problemset/problem/1030/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int ans=0;
   while(t--){
       int x;
       cin>>x;
       if(x==1){
           ans=1;
       }
   }
   if(ans==0){
       cout<<"EASY"<<endl;
   }else{
       cout<<"HARD"<<endl;
   }
}