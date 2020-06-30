/*
Question Link: https://codeforces.com/contest/1369/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

string solve(int n,string s){
    if(n==1){
        return s;
    }else if(n==2){
        if(s=="10"){
            s="0";
            return s;
        }else{
            return s;
        }
    }else{
        string s1;
        int x=n,y=-1;
        for(int i=0;i<n;i++){
            if((int)s[i]==(int)'1'){
                x=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if((int)s[i]==(int)'0'){
                y=i;
                break;
            }
        }
        if(y<x){
            return s;
        }else{
        s1 = s.substr(0,x)+'0'+s.substr(y+1,n-y-1);
        return s1;}
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s,s1;
       cin>>s;
       s1 = solve(n,s);
       cout<<s1<<endl;
   }
}