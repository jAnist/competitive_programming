/*
Question Link: https://www.codechef.com/JUNE20B/problems/PRICECON
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    long long int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>k){
            ans=ans+(x-k);
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