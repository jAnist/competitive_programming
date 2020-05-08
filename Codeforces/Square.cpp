/*
Question Link: https://codeforces.com/contest/1351/problem/B
*/

#include <iostream>

using namespace std;

int main()
{
   int t,a1,b1,c,d,a,b;
   cin>>t;
   while(t--){
       int flag=0;
       cin>>a1>>b1;
       cin>>c>>d;
       if(a1<b1){
           a=b1;
           b=a1;
       }else{
           a=a1;
           b=b1;
       }
       if(a==c){
           if((d+b)==c){
               flag=1;
           }
       }else if(a==d){
           if((c+b)==a){
               flag=1;
           }
       }
       if(flag==1){
           cout<<"Yes"<<endl;
       }else{
           cout<<"No"<<endl;
       }
   }
}