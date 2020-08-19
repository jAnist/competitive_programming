/*
Question Link: https://codeforces.com/problemset/problem/412/B
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,x;
   cin>>n>>k;
   vector<int> A;
   for(int i=0;i<n;i++){
       cin>>x;
       A.push_back(x);
   }
   sort(A.begin(),A.end());
   cout<<A[n-k]<<endl;
}