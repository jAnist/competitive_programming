/*
Question Link: https://codeforces.com/problemset/problem/617/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    if(n%5==0){
        r = 0;
    }else{
        r = 1;
    }
    cout<<(n/5)+r<<endl;
}