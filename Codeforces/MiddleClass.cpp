/*
Question Link: https://codeforces.com/contest/1334/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,x;
    cin>>n>>x;
    vector<long long int> A;
    long long int extra = 0,grt = 0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        if(y>=x){
            extra+=(y-x);
            grt+=1;
        }
        A.push_back(y);
    }
    A.push_back((-1)*extra);
    sort(A.begin(), A.end(), greater<long long int>());
    long long int i=grt;
    while(extra>0){
        if((A[i]+extra)>=x){
            extra = extra-(x-A[i]);
            i++;
            grt++;
        }else{
            break;
        }
    }
    cout<<grt<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}