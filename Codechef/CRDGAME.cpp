/*
Question Link: https://www.codechef.com/JULY20B/problems/CRDGAME
*/

#include <bits/stdc++.h>
using namespace std;

int sumDigit(int n){
    int s=0;
    while(n>0){
        s+=(n%10);
        n=n/10;
    }
    return s;
}

void solve(){
    int n,a,b,p1=0,p2=0,sa,sb;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sa = sumDigit(a);
        sb = sumDigit(b);
        if(sa>sb){
            p1++;
        }else if(sb>sa){
            p2++;
        }else{
            p1++;
            p2++;
        }
    }
    if(p1>p2){
        cout<<"0 "<<p1<<endl;
    }else if(p2>p1){
        cout<<"1 "<<p2<<endl;
    }else{
        cout<<"2 "<<p1<<endl;
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}