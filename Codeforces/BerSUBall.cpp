/*
Question Link: https://codeforces.com/problemset/problem/489/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int ans=0;
    int n,m;
    vector<int> ar1,ar2;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar1.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        ar2.push_back(x);
    }
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(),ar2.end());
    int i=0,j=0;
    while(i<n && j<m){
        if(ar1[i]>=ar2[j]){
            if(ar1[i]-ar2[j]<=1){
                ans+=1;
                i++;
            }
            j++;
        }else{
            if(ar2[j]-ar1[i]<=1){
                ans+=1;
                j++;
            }
            i++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
   solve();
}