/*
Question Link: https://www.codechef.com/SEPT20B/problems/FINXOR
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vec vector<int>

int binary[20]={1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,16383,32767,65535,131071,262143,524287,1048575};

int toBinary(int arr[]){
    int x=0;
    for(int i=0;i<20;i++){
        if(arr[i]==1){
            x+=(pow(2,i));
        }
    }
    return x;
}

void solve(){
    int n;
    cin>>n;
    int A[20]={0};
    int cnt=0;
    ll val,prev;
    while(cnt<20){
        cout<<"1 "<<binary[cnt]<<endl;
        cin>>val;
        if(val==-1){
            return;
        }
        if(cnt==0){
            if(n%2==0){
                if(val%2==1){
                    A[cnt]=1;
                }
            }else{
                if(val%2==0){
                    A[cnt]=1;
                }
            }
        }else{
            int ind = (val-prev)/(pow(2,cnt));
            int x = (n-ind)/2;
            if(x%2==1){
                A[cnt]=1;
            }
        }
        prev = val;
        cnt++;
    }
    cout<<"2 "<<toBinary(A)<<endl;
    int y;
    cin>>y;
    if(y==-1){
        return;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
