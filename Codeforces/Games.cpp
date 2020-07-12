/*
Question Link: https://codeforces.com/problemset/problem/268/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,ans=0;
   cin>>n;
   vector<int> H,A;
   while(n--){
       int h,a;
       cin>>h>>a;
       H.push_back(h);
       A.push_back(a);
   }
   for(int i=0;i<H.size();i++){
       for(int j=0;j<A.size();j++){
           if(H[j]==A[i]){
               ans+=1;
           }
       }
   }
   cout<<ans<<endl;
}