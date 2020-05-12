/*
Question Link: https://codeforces.com/problemset/problem/1251/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   string st;
   while(t--){
       cin>>st;
       vector<int> arr(26,0);
       int x,y,cnt=1;
       for(int i=0;i<st.size();i++){
           if(i==0){
               x = (int)st[i];
           }else{
               y = (int)st[i];
               if(x==y){
                   cnt = cnt+1;
               }else{
                   if(cnt%2==1){
                       arr[x-(int)'a']=1;
                   }
                   cnt = 1;
               }
               x = y;
           }
       }
       if(cnt%2!=0){
           arr[x-(int)'a']=1;
       }
       /*for(int i=0;i<26;i++){
           cout<<i+1<<" "<<arr[i]<<endl;
       }*/
       string s1="";
       for(int i=0;i<26;i++){
           if(arr[i]==1){
               char ch = i+ (int)'a';
               s1 = s1+ch;
           }
       }
       cout<<s1<<endl;
   }
}