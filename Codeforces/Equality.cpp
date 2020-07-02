/*
Question Link: https://codeforces.com/contest/1038/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   vector<int> A(26,0);
   for(int i=0;i<n;i++){
       int x=(int)s[i]-(int)'A';
       A[x]+=1;
   }
   int mn=n;
   for(int i=0;i<k;i++){
       if(A[i]<mn){
           mn=A[i];
       }
   }
   cout<<mn*k<<endl;
}