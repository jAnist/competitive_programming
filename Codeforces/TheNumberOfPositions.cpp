/*
Question Link: https://codeforces.com/contest/124/problem/A
*/

#include <iostream>
using namespace std;
 
int main()
{
    int n,a,b,m,ans;
    cin>>n>>a>>b;
    if((a+b+1)<=n){
        cout<<b+1<<endl;
    }else{
        m = a+b+1;
        ans = m-n;
        cout<<(b+1-ans)<<endl;
    }
}