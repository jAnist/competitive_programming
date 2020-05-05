/*
Question Link: https://codeforces.com/problemset/problem/546/A
*/

#include <iostream>
using namespace std;

int main()
{
    int k,n,w,ans;
    cin>>k>>n>>w;
    ans = (((w*(w+1))/2)*k)-n;
    if(ans>=0){
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
}