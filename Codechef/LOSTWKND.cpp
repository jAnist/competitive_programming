/*
Question Link: https://www.codechef.com/LTIME84B/problems/LOSTWKND
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d,e,p;
    cin>>a>>b>>c>>d>>e>>p;
    int s = (a+b+c+d+e)*p;
    if(s<=120){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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