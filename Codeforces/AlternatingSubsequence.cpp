/*
Question Link: https://codeforces.com/problemset/problem/1343/C
*/

#include <iostream>
using namespace std;

int main()
{
    int t,n,m,p;
    cin>>t;
    while(t--){
        long long int sm=0;
        cin>>n;
        cin>>p;
        long long int mx=p;
        for(int i=1;i<n;i++){
            cin>>m;
            if((p>0 && m<0) || (p<0 && m>0)){
                sm = sm+mx;
                mx = m;
            }else{
                int mx1;
                if(p>m){
                    mx1 = p;
                }else{
                    mx1 = m;
                }
                if(mx1>mx){
                    mx = mx1;
                }
            }
            if(i==n-1){
                    sm=sm+mx;
                }
            p = m;
            //cout<<sm<<" ";
        }
        if(n==1){
            sm = p;
        }
        cout<<sm<<endl;
    }
}