/*
Question Link: https://codeforces.com/problemset/problem/996/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> A={1,5,10,20,100};
   int ans=0;
   int i=4;
   while(i>=0){
       int m=n/A[i];
       ans+=m;
       n = n%A[i];
       i--;
   }
   cout<<ans<<endl;
}