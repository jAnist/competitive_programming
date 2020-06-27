/*
Question Link: https://codeforces.com/contest/1373/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    string s;
    cin>>s;
    int c0=0,c1=0,ans;
    for(int i=0;i<s.size();i++){
        if((int)s[i]==(int)'1'){
            c1++;
        }else{
            c0++;
        }
    }
    if(c0<c1){
        ans=c0;
    }else{
        ans=c1;
    }
    if(ans%2!=0){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
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