/*
Question Link: https://codeforces.com/contest/1374/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n,a2=0,a3=0,fg=0;
    cin>>n;
    while(n%2==0){
        a2++;
        n=n/2;
    }
    while(fg==0){
        if(n%3==0){
            a3++;
            n=n/3;
        }else{
            if(n==1){
                break;
            }else{
                fg=1;
            }
        }
    }
    if(fg==1){
        cout<<-1<<endl;
    }else{
        if(a3>=a2){
            cout<<(a3+(a3-a2))<<endl;
        }else{
            cout<<-1<<endl;
        }
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