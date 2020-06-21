/*
Question Link: https://codeforces.com/problemset/problem/1363/A
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int od=0,ev=0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y%2==0){
            ev+=1;
        }else{
            od+=1;
        }
    }
    if(od==0){
        cout<<"No"<<endl;
    }else if(x%2==0){
        if(ev%2==0){
            if(ev>0){
                x = x-(ev-1);
                if(od>=x){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }else{
                cout<<"No"<<endl;
            }
        }else{
            x = x-ev;
            if(od>=x){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }else if(x%2!=0){
        if(ev%2==0){
            x = x-ev;
            if(od>=x){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            if(ev>0){
                x = x-(ev-1);
                if(od>=x){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }else{
                if(od>=x){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
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