/*
Question Link: https://www.codechef.com/JUNE20B/problems/CHFICRM
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int m1=0,m2=0,m3=0;
    int flag=1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==10){
            if(m1<=0){
                flag=0;
            }else{
                m1--;
            }
            m2++;
        }else if(x==15){
            if(m2<=0){
                if(m1>=2){
                    m1=m1-2;
                }else{
                    flag=0;
                }
            }else{
                m2--;
            }
            m3++;
        }else{
            m1++;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}