/*
Question Link: https://codeforces.com/problemset/problem/659/A
*/

#include <iostream>

using namespace std;

int main()
{
   int a,b,c,ans;
   cin>>a>>b>>c;
   int d = b+c;
   if(d<0){
       ans = d%a;
       ans = ans+a;
       if(ans==0){
           cout<<a<<endl;
       }else{
           cout<<ans<<endl;
       }
   }else{
       ans = d%a;
       if(ans==0){
           cout<<a<<endl;
       }else{
           cout<<ans<<endl;
       }
   }
}