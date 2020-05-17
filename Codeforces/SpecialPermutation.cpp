/*
Question Link: https://codeforces.com/problemset/problem/1352/G
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector <int>> A = {{2,4,1,3},{2,4,1,3,5},{5,2,4,1,3,6},{6,2,4,1,3,5,7}};

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       if(n<=3){
           cout<<-1<<endl;
       }else{
       int m = n%4;
       int r = n/4;
       for(int i=0;i<A[m].size();i++){
           cout<<A[m][i]<<" ";
       }
       if(r>1){
           int i=4+m;
           while(i<n-1){
               cout<<i+2<<" "<<i+4<<" "<<i+1<<" "<<i+3<<" ";
               i = i+4;
           }
       }
       cout<<endl;
   }}
} 