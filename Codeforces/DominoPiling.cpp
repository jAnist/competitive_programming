/*
Question Link: https://codeforces.com/problemset/problem/50/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n,res;
    cin>>m>>n;
    if(m%2==0){
        res = n*(m/2);
    }else if(n%2==0){
        res = m*(n/2);
    }else{
        res = n*((m-1)/2)+(n/2);
    }
    cout<<res<<endl;
}