/*
Question Link: https://codeforces.com/problemset/problem/469/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p,q,x,fg=0;
   cin>>n;
   vector<int> A(n,0);
   cin>>p;
   for(int i=0;i<p;i++){
       cin>>x;
       A[x-1]+=1;
   }
   cin>>q;
   for(int i=0;i<q;i++){
       cin>>x;
       A[x-1]+=1;
   }
   for(int i=0;i<n;i++){
       if(A[i]==0){
           fg=1;
       }
   }
   if(fg==0){
       cout<<"I become the guy."<<endl;
   }else{
       cout<<"Oh, my keyboard!"<<endl;
   }
}