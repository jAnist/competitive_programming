/*
Question Link: https://codeforces.com/problemset/problem/1364/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,y,fg=0,x1;
    cin>>n;
    vector<int> A;
    cin>>x;
    A.push_back(x);
    cin>>y;
    if((y-x)>0){
        fg=1;
    }else if((y-x)<0){
        fg=-1;
    }
    x=y;
    for(int i=2;i<n;i++){
        cin>>y;
        if((y-x)>0 && fg==-1){
            A.push_back(x);
            fg=1;
        }else if((y-x)<0 && fg==1){
            A.push_back(x);
            fg=-1;
        }
        x1=x;
        x=y;
    }
    if(x1!=x){
        A.push_back(x);
    }
    cout<<A.size()<<endl;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }cout<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}