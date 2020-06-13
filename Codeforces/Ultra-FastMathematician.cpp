/*
Question Link: https://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s1,s2,s3="";
   cin>>s1>>s2;
   for(int i=0;i<s1.size();i++){
       if((int)s1[i]==(int)s2[i]){
           s3=s3+'0';
       }else{
           s3=s3+'1';
       }
   }
   cout<<s3<<endl;
}