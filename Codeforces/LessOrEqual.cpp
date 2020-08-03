/*
Question Link: https://codeforces.com/problemset/problem/977/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ll n,k,x,ans;
   cin>>n>>k;
   vector<int> A;
   for(int i=0;i<n;i++){
       cin>>x;
       A.push_back(x);
   }
   sort(A.begin(),A.end());
   if(k==0){
       if(A[0]<=1){
           cout<<-1<<endl;
       }else{
           cout<<A[0]-1<<endl;
       }
   }
   else{if(A[k-1]==A[k]){
       cout<<-1<<endl;
   }else{
       cout<<A[k-1]<<endl;
   }}
}