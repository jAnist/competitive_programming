/*
Question Link: https://codeforces.com/problemset/problem/1360/B
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> A(1001,0);
    int ans=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(A[x]==0){
            A[x]+=1;
        }else{
            ans=0;
        }
    }
    /*for(int i=0;i<10;i++){
        cout<<i<<" "<<A[i]<<endl;
    }
    cout<<ans<<endl;*/
    if(ans==0){
        cout<<ans<<endl;
    }else{
        int min=1005,x,i,dif;
        for(i=0;i<1001;i++){
            if(A[i]>0){
                x = i;
                break;
            }
        }
        for(int j=i+1;j<1001;j++){
            if(A[j]>0){
                dif = j-x;
                if(dif<min){
                    min=dif;
                }
                x = j;
            }
        }
        cout<<min<<endl;
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