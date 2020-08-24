/*
Question Link: https://www.codechef.com/AUG20B/problems/CHEFWARS
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    ll p,h,sm=0,p1;
    cin>>h>>p;
    p1 = p;
    while(p>0){
        if(p%2!=0){
            sm-=1;
        }
        p/=2;
        // cout<<"p = "<<p<<endl;
    }
    // cout<<"sm = "<<sm<<endl;
    sm+=(2*p1);
    // cout<<"sm = "<<sm<<endl;
    if(h<=sm){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}