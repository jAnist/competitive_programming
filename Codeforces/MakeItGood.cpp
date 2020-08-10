/*
Question Link: https://codeforces.com/problemset/problem/1385/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n,x;
    cin>>n;
    vec A(n,0);
    for(int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
    }
    int fg=0,i;
    if(n>2){for(i=n-2;i>0;i--){
        if(A[i]<A[i+1] && A[i-1]>A[i]){
            break;
        }else{
           if(A[i]<A[i+1] && A[i]==A[i-1]){
               fg=1;
           }else if(A[i]==A[i+1] && A[i]>A[i-1]){
               fg=0;
           }else if((fg==1)&&(A[i]==A[i+1] && A[i]<A[i-1])){
               break;
           }
        }
    }}
    if(n<=2){
        cout<<"0"<<endl;
    }else{
        cout<<i<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}