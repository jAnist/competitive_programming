/*
Question Link: https://codeforces.com/problemset/problem/1372/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)<<" "<<(n/2)<<endl;
    }else{
        int i,q,fg=0;
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                q=n/i;
                fg=1;
                break;
            }
        }
        // cout<<a<<" "<<b<<endl;
        if(fg==0){
            cout<<1<<" "<<n-1<<endl;
        }else{
            cout<<q<<" "<<q*(i-1)<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}