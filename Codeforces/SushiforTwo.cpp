/*
Question Link: https://codeforces.com/group/5J265CfHs2/contest/280078/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ar;
    int x,y,rx=1;
    cin>>x;
    for(int i=1;i<n;i++){
        cin>>y;
        if(x==y){
            rx+=1;
        }else{
            ar.push_back(rx);
            rx = 1;
            x=y;
        }
    }
    ar.push_back(rx);
    /*for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }cout<<endl;*/
    int mx=0;
    for(int i=0;i<ar.size()-1;i++){
        int n;
        if(ar[i]<=ar[i+1]){
            if(mx>ar[i]){
                n = mx;
            }
            else{
                n = ar[i];
            }
            mx = n;
        }else{
            if(mx>ar[i+1]){
                n = mx;
            }
            else{
                n = ar[i+1];
            }
            mx = n;
        }
    }
    long long int nx = 2*mx;
    cout<<nx<<endl;
}