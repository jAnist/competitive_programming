/*
Question Link: https://www.codechef.com/JUNE20B/problems/EVENM
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }else if(n==2){
        cout<<"1 2"<<endl;
        cout<<"4 3"<<endl;
    }else{
        vector<int> A1={1,2};
        vector<int> A2={4,3};
        for(int i=0;i<n-2;i++){
            A1.push_back(0);
            A2.push_back(0);
        }
        int a=0,b=2;
        for(int i=5;i<=(2*n);i++){
            if(i%2==0){
                if(a==0){
                    A1[b]=i;
                }else{
                    A2[b]=i;
                }
                b++;
            }else{
                if(a==0){
                    A1[b]=i;
                }else{
                    A2[b]=i;
                }
                a=a^1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<A1[i]<<" ";
        }cout<<endl;
        for(int i=0;i<n;i++){
            cout<<A2[i]<<" ";
        }cout<<endl;
        if(n%2==1){
            int ans=(2*n)+1;
            for(int i=0;i<n-2;i++){
                for(int j=0;j<n;j++){
                    cout<<ans<<" ";
                    ans++;
                }cout<<endl;
            }
        }else{
            int ans=(2*n)+1;
            for(int i=0;i<n-2;i++){
                if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<ans<<" ";
                    ans++;
                }}
                else{
                    for(int j=0;j<n;j++){
                        if(j%2==0){
                            cout<<(ans+j+1)<<" ";
                        }else{
                            cout<<(ans+j-1)<<" ";
                        }
                    }ans+=n;
                }
                cout<<endl;
            }
        }
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