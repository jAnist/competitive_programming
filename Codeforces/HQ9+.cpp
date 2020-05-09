/*
Question Link: https://codeforces.com/problemset/problem/133/A
*/

#include <iostream>

using namespace std;

int main()
{
   string st;
   cin>>st;
   int tr=0;
   for(int i=0;i<st.size();i++){
       int x = (int)st[i];
       if(x==72 || x==81 || x==57){
           cout<<"YES";
           tr = 1;
           break;
       }
   }
   if(tr==0){
       cout<<"NO";
   }
}