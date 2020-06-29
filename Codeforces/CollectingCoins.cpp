/*
Question Link: https://codeforces.com/problemset/problem/1294/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    long long int sm=a+b+c+n;
    if((sm)%3==0){
        if(a>(sm/3) || b>(sm/3) || c>(sm/3)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
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