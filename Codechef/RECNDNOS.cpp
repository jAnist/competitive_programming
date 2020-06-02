/*
Question Link: https://www.codechef.com/problems/RECNDNOS
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> A(1001,0);
    int x;
    cin>>x;
    A[x]+=1;
    for(int i=0;i<n-1;i++){
        int y;
        cin>>y;
        if(x==y){
            x=0;
        }else{
            x=y;
            A[x]+=1;
        }
    }
    /*for(int i=0;i<1001;i++){
        cout<<i<<" "<<A[i]<<endl;
    }*/
    int mx = 0,ans=0;
    for(int i=0;i<1001;i++){
        if(A[i]>mx){
            mx = A[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}