/*
Question Link: https://codeforces.com/problemset/problem/6/A
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> ar(4,0);
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        ar[i]=x;
    }
    sort(ar.begin(),ar.end());
    int s=0;
    if(ar[0]+ar[1]>ar[2] || ar[0]+ar[1]>ar[3]){
        cout<<"TRIANGLE"<<endl;
        return;
    }else if(ar[0]+ar[1]==ar[2] || ar[0]+ar[1]==ar[3]){
        s=1;
        if(ar[0]+ar[2]>ar[3] || ar[1]+ar[2]>ar[3]){
            cout<<"TRIANGLE"<<endl;
            return;
        }else if(ar[0]+ar[2]==ar[3] || ar[1]+ar[2]==ar[3]){
            s=1;
        }
    }else{
        if(ar[0]+ar[2]>ar[3] || ar[1]+ar[2]>ar[3]){
            cout<<"TRIANGLE"<<endl;
            return;
        }else if(ar[0]+ar[2]==ar[3] || ar[1]+ar[2]==ar[3]){
            s=1;
        }
    }
    if(s==1){
        cout<<"SEGMENT"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}

int main()
{
   solve();
}