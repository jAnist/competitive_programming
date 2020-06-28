/*
Question Link: https://codeforces.com/problemset/problem/349/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,a1=0,a2=0,a3=0,fg=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;
       if(x==25){
           a1++;
       }else if(x==50){
           if(a1==0){
               fg=1;
           }else{
               a2++;
               a1--;
           }
       }else{
           if(a2==0){
               if(a1>=3){
                   a3++;
                   a1=a1-3;
               }else{
                   fg=1;
               }
           }else{
               a2--;
               if(a1==0){
                   fg=1;
               }else{
                   a1--;
                   a3++;
               }
           }
       }
       //cout<<a1<<" "<<a2<<" "<<a3<<endl;
   }
   if(fg==1){
       cout<<"NO"<<endl;
   }else{
       cout<<"YES"<<endl;
   }
}