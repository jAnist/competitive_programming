/*
Question Link: https://codeforces.com/problemset/problem/1244/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d,k,m,n;
    cin>>a>>b>>c>>d>>k;
    m=a/c;
    n=b/d;
    if(a%c!=0){
        m++;
    }
    if(b%d!=0){
        n++;
    }
    if((m+n)>k){
        cout<<-1<<endl;
    }else{
        cout<<m<<" "<<n<<endl;
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