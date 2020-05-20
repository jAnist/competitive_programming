/*
Question Link: https://codeforces.com/problemset/problem/141/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
   string s1,s2,s3;
   cin>>s1>>s2>>s3;
   vector<int> ar1(26,0),ar2(26,0);
   for(int i=0;i<s1.size();i++){
       ar1[(int)s1[i]-(int)'A']+=1;
   }
   for(int i=0;i<s2.size();i++){
       ar1[(int)s2[i]-(int)'A']+=1;
   }
   for(int i=0;i<s3.size();i++){
       ar2[(int)s3[i]-(int)'A']+=1;
   }
   for(int i=0;i<26;i++){
       if(ar1[i]!=ar2[i]){
           flag=1;
           cout<<"NO"<<endl;
           break;
       }
   }
   if(flag==0){
       cout<<"YES"<<endl;
   }
}