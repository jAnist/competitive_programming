/*
Question Link: https://codeforces.com/problemset/problem/337/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   vector<int> ar;
   for(int i=0;i<m;i++){
       int x;
       cin>>x;
       ar.push_back(x);
   }
   sort(ar.begin(),ar.end());
   int dif=1000,x;
   for(int i=0;i<=(m-n);i++){
       x = ar[i+n-1]-ar[i];
       if(dif>x){
           dif=x;
       }
   }
   cout<<dif<<endl;
}