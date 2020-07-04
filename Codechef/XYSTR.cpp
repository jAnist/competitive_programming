/*
Question Link: https://www.codechef.com/JUNE20B/problems/XYSTR
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<(s.size()-1);i++){
        if(((int)s[i]==(int)'x' && (int)s[i+1]==(int)'y') || ((int)s[i]==(int)'y' && (int)s[i+1]==(int)'x')){
            ans+=1;
            i++;
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