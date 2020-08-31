/*
Question Link: https://www.codechef.com/JULY20B/problems/PTMSSNG
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y,m;
    cin>>m;
    n = 4*m - 1;
    vector<int> A,B;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        A.push_back(x);
        B.push_back(y);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    /*for(int i=0;i<n;i++){
        cout<<A[i]<<" "<<B[i]<<endl;
    }*/
    
    int fg=0;
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1]){
            i++;
        }else{
            cout<<A[i]<<" ";
            fg=1;
            break;
        }
    }
    if(fg==0){
        cout<<A[n-1]<<" ";
    }
    fg=0;
    for(int i=0;i<n-1;i++){
        if(B[i]==B[i+1]){
            i++;
        }else{
            cout<<B[i]<<endl;
            fg=1;
            break;
        }
    }
    if(fg==0){
        cout<<B[n-1]<<endl;
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