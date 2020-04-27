/*
Question link: https://codeforces.com/contest/977/problem/A
*/

#include <iostream>
using namespace std;
 
int one(int n,int k){
    int m;
    m = n%10;
    if(m>=k){
        return n-k;
    }
    else{
        return one(n/10,k-m-1);
    }
}
 
int main(){
    int n,k;
    cin>>n>>k;
    cout<<one(n,k);
}
