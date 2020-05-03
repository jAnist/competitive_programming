/*
Question Link: https://codeforces.com/problemset/problem/1335/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n>2){
            if(n%2==0){
                cout<<(n/2)-1<<endl;
            }else{
                cout<<(n/2)<<endl;
            }
        }else{
            cout<<0<<endl;
        }
    }
}