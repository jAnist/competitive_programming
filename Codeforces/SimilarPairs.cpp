/*
Question Link: https://codeforces.com/problemset/problem/1360/C
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> A(101,0);
    int ev=0,od=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A[x]+=1;
        if(x%2==0){
            ev+=1;
        }else{
            od+=1;
        }
    }
    if(od%2==0){
        cout<<"YES"<<endl;
    }else{
        int fg=0;
        for(int i=0;i<100;i++){
            if(A[i]>0 && A[i+1]>0){
                fg=1;
                break;
            }
        }
        if(fg==0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
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