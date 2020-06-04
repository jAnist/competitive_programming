/*
Question Link: https://www.codechef.com/LTIME84B/problems/WWALK
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x=0,y=0;
    vector<long long int> A,B;
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        A.push_back(a);
    }
    for(int i=0;i<n;i++){
        long long int a;
        cin>>a;
        B.push_back(a);
    }
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(x==y && A[i]==B[i]){
            ans+=A[i];
        }
        x+=A[i];
        y+=B[i];
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