/*
Question Link: https://codeforces.com/problemset/problem/1353/C
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unsigned long long int sm=0;
    for(long long int i=1;i<=(n/2);i++){
        sm = sm+((((2*i)+1)*((2*i)+1)) - (((2*(i-1))+1)*((2*(i-1))+1)))*i;
        //cout<<sm<<" ";
    }
    cout<<sm<<endl;
}

int main()
{
    int t;
   cin>>t;
   while(t--){
       solve();
   }
}