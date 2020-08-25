/*
Question Link: https://www.codechef.com/AUG20B/problems/CHEFWED
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

int inefficiency(int arr[],int l,int r,int k,map<int,int> Mf,int infR){
    // cout<<l<<" "<<r<<" "<<infR<<endl;
    map<int,int> Mi,Mleft,Mright;
    int totalInf=infR, tempInf, infL=0,index;
    int infRfinal,infLfinal;
    int flag=1;
    for(int i=l;i<r;i++){
        Mi[arr[i]]++;
        if(Mi[arr[i]]==2){
            infL+=2;
        }else if(Mi[arr[i]]>2){
            infL++;
        }
        Mf[arr[i]]--;
        if(Mf[arr[i]]>1){
            infR--;
        }else if(Mf[arr[i]]==1){
            infR-=2;
        }
        tempInf = infR + infL + k;
        // cout<<i<<" "<<infL<<" "<<infR<<" "<<tempInf<<" "<<totalInf<<endl;
        if(tempInf<=totalInf){
            flag=0;
            Mleft=Mi;
            Mright=Mf;
            index=i;
            totalInf=tempInf;
            infLfinal=infL;
            infRfinal=infR;
        }
    }
    if(flag==1){
        return totalInf;
    }else{
        return k+inefficiency(arr,l,index,k,Mleft,infLfinal)+inefficiency(arr,index+1,r,k,Mright,infRfinal);
    }
}

void solve(){
    int n,k,x,total,inf=0;
    cin>>n>>k;
    map<int,int> M;
    if(k==1){
        total=1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(M[x]==1){
                total++;
                for(int j=1;j<=100;j++){
                    M[j]=0;
                }
            }
            M[x]++;
        }
    }else{
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        M[arr[i]]++;
        if(M[arr[i]]==2){
            inf+=2;
        }else if(M[arr[i]]>2){
            inf++;
        }
    }
    total = k + inefficiency(arr,0,n-1,k,M,inf);}
    cout<<total<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}