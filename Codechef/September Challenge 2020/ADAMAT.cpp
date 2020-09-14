/*
Question Link: https://www.codechef.com/SEPT20B/problems/ADAMAT
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

int matrix(int arr[][100],int n,int k){
    if(n==1){
        return 0;
    }
    int a = n;
    int x = arr[n-1][0];
    if(k==1){
        if(x!=a){
            // cout<<"1"<<endl;
            return matrix(arr,n-1,k);
        }
        // cout<<"2"<<endl;
        return 1+matrix(arr,n-1,0);
    }
    if(x!=a){
        // cout<<"3"<<endl;
        return 1+matrix(arr,n-1,1);
    }
    // cout<<"4"<<endl;
    return matrix(arr,n-1,k);
}

void solve(){
    int n;
    cin>>n;
    int arr[n][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ans = matrix(arr,n,1);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
