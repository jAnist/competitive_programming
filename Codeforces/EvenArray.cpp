/*
Question Link: https://codeforces.com/problemset/problem/1367/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,ev=0,od=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i%2!=x%2){
            if(i%2==0){
                ev++;
            }else{
                od++;
            }
        }
    }
    if(od==ev){
        cout<<od<<endl;
    }else{
        cout<<-1<<endl;
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