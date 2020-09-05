/*
Question Link: https://codeforces.com/problemset/problem/520/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,ans=26;
   cin>>n;
   string s;
   cin>>s;
   vector<int> A(26,0);
   for(int i=0;i<n;i++){
       int x = (int)s[i] - (int)'a';
       if(x<0){
           x = x + (int)'a' - (int)'A';
       }
       if(A[x]==0){
           ans--;
       }
       A[x]++;
       //cout<<x<<endl;
   }
   //cout<<ans<<endl;
   if(ans==0){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
}