/*
Question Link: https://codeforces.com/problemset/problem/119/A
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
       
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}

int main()
{
   int a,b,n;
   cin>>a>>b>>n;
   int ca=0,cb=0,cnt=1;
   while(n>0){
       if(cnt%2==1){
           n = n-gcd(a,n);
           ca++;
       }else{
           n = n-gcd(b,n);
           cb++;
       }
       cnt++;
   }
   if(ca>cb){
       cout<<"0"<<endl;
   }else{
       cout<<"1"<<endl;
   }
}