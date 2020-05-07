/*
Question Link: https://codeforces.com/problemset/problem/791/A
*/

#include <iostream>
using namespace std;

int main()
{
   int a,b,i;
   cin>>a>>b;
   for(i=1;i<=5;i++){
       a = a*3; b = b*2;
       if(a>b){
           break;
       }
   }
   cout<<i<<endl;
}