/*
Question Link: https://www.codechef.com/SEPT20B/problems/TREE2
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    unordered_map<int,int> A;
    int n,x,cnt=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x!=0){
        if(A[x]==0){
            cnt++;
            A[x]++;
        }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
