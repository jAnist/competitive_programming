/*
Question Link: https://codeforces.com/contest/116/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,b,cap=0,cur=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a>>b;
       cur=cur-a+b;
       if(cur>cap){
           cap=cur;
       }
   }
   cout<<cap<<endl;
}