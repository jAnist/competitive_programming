/*
Question Link: https://codeforces.com/problemset/problem/1013/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,a1=0,a2=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;
       a1+=x;
   }
   for(int i=0;i<n;i++){
       cin>>x;
       a2+=x;
   }
   if(a2<=a1){
       cout<<"Yes"<<endl;
   }else{
       cout<<"No"<<endl;
   }
}