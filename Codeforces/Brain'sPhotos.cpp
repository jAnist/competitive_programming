/*
Question Link: https://codeforces.com/problemset/problem/707/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,ans=0;
   char c;
   cin>>n>>m;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>c;
           if(c=='C' || c=='M' || c=='Y'){
               ans=1;
           }
       }
   }
   if(ans==0){
       cout<<"#Black&White"<<endl;
   }else{
       cout<<"#Color"<<endl;
   }
}