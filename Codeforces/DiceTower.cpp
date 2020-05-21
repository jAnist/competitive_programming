/*
Question Link: https://codeforces.com/group/5J265CfHs2/contest/280078/problem/B
*/

#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   unsigned long long int x,y;
   for(int i=0;i<t;i++){
       cin>>x;
       y = x%14;
       y+=14;
       if(y>=15 && y<=20 && x>14){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }
}