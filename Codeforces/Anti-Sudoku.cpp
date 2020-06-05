/*
Question Link: https://codeforces.com/contest/1335/problem/D
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s,s1;
    for(int i=0;i<9;i++){
        cin>>s;
        if(i==0){
            s1 = s[1];
            s.replace(0,1,s1);
        }else if(i==1){
            s1 = s[4];
            s.replace(3,1,s1);
        }else if(i==2){
            s1 = s[7];
            s.replace(6,1,s1);
        }else if(i==3){
            s1 = s[0];
            s.replace(1,1,s1);
        }else if(i==4){
            s1 = s[3];
            s.replace(4,1,s1);
        }else if(i==5){
            s1 = s[6];
            s.replace(7,1,s1);
        }else if(i==6){
            s1 = s[1];
            s.replace(2,1,s1);
        }else if(i==7){
            s1 = s[4];
            s.replace(5,1,s1);
        }else{
            s1 = s[7];
            s.replace(8,1,s1);
        }
        cout<<s<<endl;
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}