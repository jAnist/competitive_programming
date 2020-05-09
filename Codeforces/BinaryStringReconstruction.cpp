/*
Question Link: https://codeforces.com/contest/1352/problem/F
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       vector<int> ans;
       if(a==0 && c==0){
           for(int i=0;i<b;i++){
               if(i==0){
                   ans.push_back(10);
               }else{
                   if(i%2==0){
                       ans.push_back(0);
                   }else{
                       ans.push_back(1);
                   }
               }
           }
       }else{
           for(int i=0;i<c;i++){
               if(i==0){
                   ans.push_back(11);
               }else{
                   ans.push_back(1);
               }
           }
           for(int i=0;i<a;i++){
               if(i==0){
                   ans.push_back(0);
                   ans.push_back(0);
               }else{
                   ans.push_back(0);
               }
           }
           if(a==0 || c==0){
               for(int i=0;i<b;i++){
                   if(ans[ans.size()-1]==0){
                       ans.push_back(1);
                   }else{
                       ans.push_back(0);
                   }
               }
           }else{
               for(int i=0;i<b-1;i++){
                   if(ans[ans.size()-1]==0){
                       ans.push_back(1);
                   }else{
                       ans.push_back(0);
                   }
               }
           }
       }
       for(int i=0;i<ans.size();i++){
           cout<<ans[i];
       }cout<<endl;
   }
}