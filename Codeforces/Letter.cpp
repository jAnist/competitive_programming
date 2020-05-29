/*
Question Link: https://codeforces.com/group/5J265CfHs2/contest/280078/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //cout<<s.size()<<endl;
    int m=s.size()+1,n=-1;
    for(int i=0;i<s.size();i++){
        //cout<<i<<endl;
        if((int)s[i]>=(int)'a' && (int)s[i]<=(int)'z'){
            m = i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        //cout<<i<<endl;
        if((int)s[i]>=(int)'A' && (int)s[i]<=(int)'Z'){
            n = i;
            break;
        }
    }
    //cout<<m<<" "<<n<<endl;
    if(m>n){
        cout<<0<<endl;
    }else{
        vector<int> A;
        int sm=0;
        for(int i=m;i<=n;i++){
            if((int)s[i]>=(int)'A' && (int)s[i]<=(int)'Z'){
                sm+=1;
            }
            A.push_back(sm);
        }
        /*for(int i=0;i<A.size();i++){
            cout<<A[i]<<" ";
        }cout<<endl;*/
        int ans=sm,y;
        for(int i=0;i<A.size();i++){
            y = sm-(2*A[i])+i+1;
            //cout<<i<<" "<<y<<endl;
            if(y<ans){
            ans = y;
        }
        }
        cout<<ans<<endl;
    }
}