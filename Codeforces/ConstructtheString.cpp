/*
Question Link: https://codeforces.com/contest/1335/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    string s1="";
    int j='a';
    for(int i=0;i<n;i++){
        int s = j+(i%b);
        char ch = s;
        s1 = s1+ch;
    }
    cout<<s1<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}