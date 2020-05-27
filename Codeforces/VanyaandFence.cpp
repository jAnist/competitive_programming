/*
Question Link: https://codeforces.com/problemset/problem/677/A
*/

#include <iostream>

using namespace std;

int main()
{
   int n,h;
   cin>>n>>h;
   int ans=n;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(x>h){
           ans=ans+1;
       }
   }
   cout<<ans<<endl;
}