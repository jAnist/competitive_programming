/*
Question Link: https://codeforces.com/problemset/problem/1366/C
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,ans=0;
    cin>>n>>m;
    vector<vector <int>> A;
    for(int i=0;i<n;i++){
        vector<int> B;
        for(int j=0;j<m;j++){
            cin>>x;
            B.push_back(x);
        }
        A.push_back(B);
    }
    int dist=n+m-2;
    //cout<<dist<<endl;
    for(int i=0;i<=((dist-1)/2);i++){
        int c0=0,c1=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if((j+k==i)||(j+k==(n+m-2-i))){
                    if(A[j][k]==0){
                        c0++;
                    }else{
                        c1++;
                    }
                }
            }
        }
        if(c0<c1){
            ans+=c0;
        }else{
            ans+=c1;
        }
        //cout<<c0<<" "<<c1<<" "<<ans<<endl;
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