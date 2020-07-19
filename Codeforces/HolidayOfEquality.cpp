/*
Question Link: https://codeforces.com/problemset/problem/758/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,x,mx=0,n;
   long long int sm=0;
   cin>>t;
   n=t;
   vector<int> A;
   while(n--){
       cin>>x;
       if(x>mx){
           mx=x;
       }
       A.push_back(x);
   }
   for(int i=0;i<t;i++){
       sm+=(mx-A[i]);
   }
   cout<<sm<<endl;
}