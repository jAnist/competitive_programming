/*
Question Link: https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string st;
   cin>>st;
   string bst="",sst="";
   int b=0,s=0;
   for(int i=0;i<st.size();i++){
       if((int)st[i]>=(int)'a' && (int)st[i]<=(int)'z'){
           s = s+1;
           sst = sst+st[i];
           char ch = (int)st[i]-(int)'a'+(int)'A';
           bst = bst+ch;
       }else{
           b = b+1;
           bst = bst+st[i];
           char ch = (int)st[i]-(int)'A'+(int)'a';
           sst = sst+ch;
       }
   }
   if(b>s){
       cout<<bst;
   }else{
       cout<<sst;
   }
   cout<<endl;
}