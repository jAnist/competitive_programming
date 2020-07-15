/*
Question Link: https://codeforces.com/problemset/problem/510/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   string s1="",s2="",s3="#";
   for(int i=0;i<m;i++){
       s1+='#';
   }
   for(int i=0;i<m-1;i++){
       s2+='.';
   }s2+='#';
   for(int i=0;i<m-1;i++){
       s3+='.';
   }
   for(int i=1;i<=n;i++){
       if(i%2==1){
           cout<<s1<<endl;
       }else{
           if(i%4==0){
               cout<<s3<<endl;
           }else{
               cout<<s2<<endl;
           }
       }
   }
}