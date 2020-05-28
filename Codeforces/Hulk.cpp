/*
Question Link: https://codeforces.com/problemset/problem/705/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1="that I hate ",s2="that I love ",s4="it";
    string ans="I hate ";
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            ans+=s2;
        }else{
            ans+=s1;
        }
    }
    ans+=s4;
    cout<<ans<<endl;
}