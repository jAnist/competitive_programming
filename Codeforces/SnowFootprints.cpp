/*
Question Link: https://codeforces.com/problemset/problem/298/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int rf = -1;
   int rl = -1;
   int lf = -1;
   int l=0;
   for(int i=0;i<n;i++){
       if(s[i]=='R'){
           if(rf==-1){
               rf = i+1;
           }
           rl = i+1;
       }
       if(s[i]=='L'){
           l=1;
           if(lf==-1){
               lf = i+1;
           }
       }
   }
   if(l==0){
       rl+=1;
   }
   if(rf==-1){
       rf = lf;
       rl = lf-1;
   }
   cout<<rf<<" "<<rl<<endl;
}