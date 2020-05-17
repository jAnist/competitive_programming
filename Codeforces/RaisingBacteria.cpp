/*
Question Link: https://codeforces.com/problemset/problem/579/A
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> bin(long long int n){
    vector<int> arr,arr2;
    while(n>0){
        arr.push_back(n%2);
        n=n/2;
    }
    for(int i=arr.size()-1;i>=0;i--){
        arr2.push_back(arr[i]);
    }
    return arr2;
}

int main()
{
   int n,ans=0;
   cin>>n;
   vector<int> ar;
   ar = bin(n);
   for(int i=0;i<ar.size();i++){
       if(ar[i]==1){
           ans+=1;
       }
   }
   cout<<ans<<endl;
}