/*
Question Link: https://codeforces.com/problemset/problem/1296/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,od=0,ev=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0){
            ev+=1;
        }else{
            od+=1;
        }
    }
    if(od==0){
        cout<<"NO"<<endl;
    }else{
        if(ev==0){
            if(n%2==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
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