/*
Question Link: https://codeforces.com/problemset/problem/1186/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,s,d,mn;
   cin>>a>>s>>d;
   if(s<d){
       mn=s;
   }else{
       mn=d;
   }
   if(a<=mn){
       cout<<"Yes"<<endl;
   }else{
       cout<<"No"<<endl;
   }
}