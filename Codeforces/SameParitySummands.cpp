/*
Question Link: https://codeforces.com/contest/1352/problem/B
*/

#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       if(k>n){
           cout<<"NO"<<endl;
       }else if(k==n){
           cout<<"YES"<<endl;
           for(int i=0;i<n;i++){
               cout<<1<<" ";
           }cout<<endl;
       }else{
           if(n%2==1){
               if(k%2==0){
                   cout<<"NO"<<endl;
               }else{
                   cout<<"YES"<<endl;
                   for(int i=0;i<k-1;i++){
                       cout<<1<<" ";
                   }
                   cout<<(n-k+1)<<endl;
               }
           }else{
               if(k%2==0){
                   cout<<"YES"<<endl;
                   for(int i=0;i<k-1;i++){
                       cout<<1<<" ";
                   }
                   cout<<(n-k+1)<<endl;
               }else{
                   if(n<2*k){
                       cout<<"NO"<<endl;
                   }else{
                       cout<<"YES"<<endl;
                       for(int i=0;i<k-1;i++){
                           cout<<2<<" ";
                       }
                       cout<<(n-2*(k-1))<<endl;
                   }
               }
           }
       }
   }
}