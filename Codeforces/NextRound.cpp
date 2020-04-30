/*
Question Link: https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n,m,k,k_val,res=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m>0){
            if(i<k-1){
                res=res+1;
            }else if(i==k-1){
                res = res+1;
                k_val = m;
            }else{
                if(m==k_val){
                    res = res+1;
                }else{
                    break;
                }
            }
        }else{
            break;
        }
    }
    cout<<res;
}