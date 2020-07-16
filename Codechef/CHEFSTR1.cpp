/*
Question Link: https://www.codechef.com/JULY20B/problems/CHEFSTR1
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s,t;
    long long int ans=0;
    cin>>n;
    cin>>t;
    for(int i=0;i<n-1;i++){
        cin>>s;
        if(t>s){
            ans+=(t-s-1);
        }else{
            ans+=(s-t-1);
        }
        t=s;
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