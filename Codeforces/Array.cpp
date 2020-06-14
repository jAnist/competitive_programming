/*
Question Link: https://codeforces.com/problemset/problem/300/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,neg=0,pos=0,t=0;
   cin>>n;
   vector<int> A;
   for(int i=0;i<n;i++){
       cin>>x;
       if(x<0){
           neg++;
           if(t==0){
               cout<<1<<" "<<x<<endl;
               t++;
               neg--;
           }else{
               A.push_back(x);
           }
       }else if(x>0){
           pos++;
           A.push_back(x);
       }else{
           A.push_back(x);
       }
   }
   if(pos>0){
       int i;
       for(i=0;i<A.size();i++){
           if(A[i]>0){
               cout<<1<<" "<<A[i]<<endl;
               break;
           }
       }
       cout<<(n-2)<<" ";
       for(int j=0;j<A.size();j++){
           if(j!=i){
               cout<<A[j]<<" ";
           }
       }cout<<endl;
   }else if(neg>=2){
       int a,b,cnt=0;
       cout<<2<<" ";
       for(int i=0;i<A.size();i++){
           if(A[i]<0){
               if(cnt==0){
                   cout<<A[i]<<" ";
                   cnt++;
                   a=i;
               }else if(cnt==1){
                   cout<<A[i]<<" ";
                   cnt++;
                   b=i;
                   break;
               }
           }
       }cout<<endl;
       cout<<(n-3)<<" ";
       for(int i=0;i<A.size();i++){
           if(i!=a && i!=b){
               cout<<A[i]<<" ";
           }
       }cout<<endl;
   }
}