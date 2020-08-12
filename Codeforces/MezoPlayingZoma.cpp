/*
Question Link: https://codeforces.com/problemset/problem/1285/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int l=0,r=0;
   for(int i=0;i<s.size();i++){
       if((int)s[i]==(int)'L'){
           l+=1;
       }else{
           r+=1;
       }
   }
   cout<<(l+r+1)<<endl;
}