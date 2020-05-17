/*
Question Link: https://codeforces.com/problemset/problem/734/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string st;
   cin>>st;
   int a=0,d=0;
   for(int i=0;i<n;i++){
       if((int)st[i]==(int)'A'){
           a+=1;
       }else{
           d+=1;
       }
   }
   if(a>d){
       cout<<"Anton"<<endl;
   }else if(d>a){
       cout<<"Danik"<<endl;
   }else{
       cout<<"Friendship"<<endl;
   }
}