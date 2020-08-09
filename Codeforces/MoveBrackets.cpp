/*
Question Link: https://codeforces.com/contest/1374/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int n,m=0,neg=0,mx=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if((int)s[i]=='('){
            m++;
        }else{
            m--;
        }
        if(m<0){
            neg=m;
        }
        if(neg<mx){
            mx=neg;
        }
        //cout<<m<<" "<<neg<<" "<<mx<<endl;
    }
    cout<<mx*(-1)<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}