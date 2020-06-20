/*
Question Link: https://codeforces.com/contest/1367/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int fg=0,ans=0,p,i;
    for(i=0;i<n;i++){
        if((int)s[i]==(int)'1'){
            if(fg==0){
                if(i>k){
                    ans+=(i/(k+1));
                }
                p=i;
                fg=1;
            }else{
                if((i-p-1-k)>k){
                    ans+=((i-p-1-k)/(k+1));
                }
                p=i;
            }
        }
    }
    if(fg==0){
        if(n%(k+1)==0){
            ans=n/(k+1);
        }else{
            ans=(n/(k+1))+1;
        }
        if(ans==0){
            ans=1;
        }
    }else{
        if((n-p-1)>k){
            ans+=((n-p-1)/(k+1));
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