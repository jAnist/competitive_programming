/*
Question Link: https://codeforces.com/contest/1352/problem/C
*/

#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,k,m,r;
       cin>>n>>k;
       m = k/(n-1);
       r = k%(n-1);
       long long int sm;
       if(r==0){
           sm = (m-1)*n + n-1;
       }else{
           sm = m*n + r;
       }
       cout<<sm<<endl;
}}