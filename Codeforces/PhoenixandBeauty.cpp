/*
Question Link: https://codeforces.com/contest/1348/problem/B
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,n,k,m,cnt,x;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> arr(n+1,0);
        vector<int> arr2;
        cnt = 0;
        for(int i=0;i<n;i++){
            cin>>m;
            if(arr[m]==0){
                arr[m] = arr[m]+1;
                cnt = cnt+1;
                arr2.push_back(m);
            }
        }
        if(cnt>k){
            cout<<-1<<endl;
        }else{
            if(cnt<k){
                x = k-cnt;
                for(int i=0;i<x;i++){
                    arr2.push_back(arr2[i]);
                }
            }
            cout<<n*k<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<k;j++){
                    cout<<arr2[j]<<" ";
                }
            }
            cout<<endl;
        }
    }
}