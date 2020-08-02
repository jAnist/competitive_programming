/*
Question Link: https://codeforces.com/problemset/problem/831/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int m1,m2;
   string s1,s2,s3,ans="";
   cin>>s1>>s2>>s3;
   char c;
   vector<int> A1(26,0),A2(26,0);
   for(int i=0;i<26;i++){
       m1=(int)s1[i]-(int)'a';
       A1[m1]=i;
       m2=(int)s2[i]-(int)'a';
       A2[i]=m2;
   }
   for(int i=0;i<s3.size();i++){
       if(s3[i]>='A' && s3[i]<='Z'){
           m1 = (int)s3[i]-(int)'A';
           m1 = A1[m1];
           m1 = A2[m1]+(int)'A';
           c = m1;
           ans+=c;
       }else if(s3[i]>='a' && s3[i]<='z'){
           m1 = (int)s3[i]-(int)'a';
           m1 = A1[m1];
           m1 = A2[m1]+(int)'a';
           c = m1;
           ans+=c;
       }else{
           c = (int)s3[i];
           ans+=c;
       }
   }
   cout<<ans<<endl;
}