/*
Question Link: https://codeforces.com/problemset/problem/431/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,d,ans=0;
   cin>>a>>b>>c>>d;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
       if((int)s[i]==(int)'1'){
           ans+=a;
       }else if((int)s[i]==(int)'2'){
           ans+=b;
       }else if((int)s[i]==(int)'3'){
           ans+=c;
       }else{
           ans+=d;
       }
   }
   cout<<ans<<endl;
}