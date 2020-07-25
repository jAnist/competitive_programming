/*
Question Link: https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   cin>>x;
   vector<int> A;
   A.push_back(x);
   for(int i=0;i<3;i++){
       cin>>x;
       int fg=0;
       for(int j=0;j<A.size();j++){
           if(A[j]!=x){
               fg+=1;
           }
       }
       if(fg==A.size()){
           A.push_back(x);
       }
   }
   cout<<(4-A.size())<<endl;
}