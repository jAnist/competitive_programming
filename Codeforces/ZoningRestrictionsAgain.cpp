/*
Question Link: https://codeforces.com/problemset/problem/1162/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int ans=0;
   int n,h,m,l,r,x;
   cin>>n>>h>>m;
   vector<int> A(n,-1);
   for(int i=0;i<m;i++){
       cin>>l>>r>>x;
       for(int j=l-1;j<=r-1;j++){
           if(A[j]!=-1){
               if(x<A[j]){
                   A[j]=x;
               }
           }else{
               A[j]=x;
           }
       }
   }
   /*for(int i=0;i<n;i++){
       cout<<A[i]<<" ";
   }cout<<endl;*/
   for(int i=0;i<n;i++){
       if(A[i]==-1){
           ans+=(h*h);
       }else{
           ans+=(A[i]*A[i]);
       }
   }
   cout<<ans<<endl;
}