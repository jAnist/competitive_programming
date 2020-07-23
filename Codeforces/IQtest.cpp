/*
Question Link: https://codeforces.com/problemset/problem/25/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cin>>n;
   int odc=0,evc=0,odi=0,evi=0;
   for(int i=0;i<n;i++){
       cin>>x;
       if(x%2==0){
           evc+=1;
           evi=i+1;
       }else{
           odc+=1;
           odi=i+1;
       }
   }
   if(odc==1){
       cout<<odi<<endl;
   }else{
       cout<<evi<<endl;
   }
}