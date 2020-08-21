/*
Question Link: https://codeforces.com/problemset/problem/731/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pos=1,ans=0,a,b;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        b = (int)s[i]-(int)'a'+1;
        a = b - pos;
        if(a<0){
            a=a-2*(a);
        }
        if(a>(26-a)){
            ans+=(26-a);
        }else{
            ans+=a;
        }
        pos=b;
        //cout<<pos<<endl;
    }
    cout<<ans<<endl;
}