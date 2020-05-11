/*
Question Link: https://codeforces.com/problemset/problem/1348/D
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,m,d,x,ab,cd;
       vector<int> ans;
       cin>>n;
       m = log2(n);
       if(n!=(int)(pow(2,m+1))-1){
        int sm = n - (int)(pow(2,m)) +1;
        x = log2(sm);
       //cout<<sm<<" "<<x<<endl;
       for(int i=0;i<m;i++){
           ans.push_back((int)(pow(2,i)));
           if(i==x){
               ans.push_back(sm);
           }
       }
       /*for(int i=0;i<ans.size();i++){
           cout<<ans[i]<<" ";
       }cout<<endl;*/
       
       vector<int> res;
       d = ans.size();
       int mx = 1;
       cout<<(d-1)<<endl;
       for(int i=1;i<ans.size();i++){
           cout<<(ans[i]-mx)<<" ";
           mx = ans[i];
       }cout<<endl;}
       else{
           cout<<m<<endl;
           for(int i=0;i<m;i++){
               cout<<(int)(pow(2,i))<<" ";
           }cout<<endl;
       }
   }
}