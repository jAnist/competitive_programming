/*
Question Link: https://codeforces.com/problemset/problem/580/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int y;
   cin>>y;
   int ans=1,fin=1;
   for(int i=0;i<n-1;i++){
       int x;
       cin>>x;
       if(x<y){
           if(ans>fin){
               fin=ans;
           }
           ans=1;
       }else{
           ans+=1;
       }
       y = x;
       //cout<<y<<" "<<ans<<" "<<fin<<endl;
   }
   if(ans>fin){
        fin=ans;
    }
   cout<<fin<<endl;
}