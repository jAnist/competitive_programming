/*
Question Link: https://codeforces.com/problemset/problem/1189/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s,s1;
   cin>>s;
   int a1=0,a0=0;
   for(int i=0;i<n;i++){
       if((int)s[i]==(int)'1'){
           a1++;
       }else{
           a0++;
       }
   }
   if(a1!=a0){
       cout<<1<<endl;
       cout<<s<<endl;
   }else{
       cout<<2<<endl;
       s1 = s.substr(1,n-1);
       cout<<s[0]<<" "<<s1;
   }
}