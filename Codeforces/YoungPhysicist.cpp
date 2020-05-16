/*
Question Link: https://codeforces.com/problemset/problem/69/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n,X=0,Y=0,Z=0;
   cin>>n;
   for(int i=0;i<n;i++){
       int x,y,z;
       cin>>x>>y>>z;
       X = X+x;
       Y = Y+y;
       Z = Z+z;
   }
   if(X==0 && Y==0 && Z==0){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
}