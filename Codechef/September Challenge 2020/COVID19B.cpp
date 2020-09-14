/*
Question Link: https://www.codechef.com/SEPT20B/problems/COVID19B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

float intersect(int m1,int c1,int m2,int c2){
    if(m1==m2){
        return -1;
    }
    float x,y,z;
    x = (c2-c1);
    y = (m1-m2);
    z = x/y;
    if(z>0){
        return z;
    }
    return -1;
}

void spread(int i,int n,float input[][5],bool *A,float t){
    for(int j=0;j<n;j++){
        if(input[i][j]>=t){
            if(!A[j]){
                A[j]=true;
                spread(j,n,input,A,input[i][j]);
            }
        }
    }
}

void solve(){
    int n,v;
    cin>>n;
    int V[n];
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    float inter[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                inter[i][j]=-1;
            }else{
                inter[i][j]=intersect(V[i],i+1,V[j],j+1);
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<inter[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int mn=5,mx=1;
    for(int i=0;i<n;i++){
        bool covid[n]={0};
        covid[i]=true;
        spread(i,n,inter,covid,0);
        int count=0;
        //cout<<i<<" ";
        for(int j=0;j<n;j++){
            //cout<<covid[j]<<" ";
            if(covid[j]){
                count++;
            }
        }
        // cout<<endl;
        if(count<mn){
            mn=count;
        }
        if(count>mx){
            mx=count;
        }
    }
    cout<<mn<<" "<<mx<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
