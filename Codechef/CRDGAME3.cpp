/*
Question Link: https://www.codechef.com/AUG20B/problems/CRDGAME3
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int c,r,dc,dr;
    cin>>c>>r;
    if(c%9==0){
        dc=c/9;
    }else{
        dc=c/9 + 1;
    }
    if(r%9==0){
        dr=r/9;
    }else{
        dr=r/9 + 1;
    }
    if(dr==dc){
        cout<<1<<" "<<dr<<endl;
    }else{
        if(dr<dc){
            cout<<1<<" "<<dr<<endl;
        }else{
            cout<<0<<" "<<dc<<endl;
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