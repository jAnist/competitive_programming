/*
Question Link: https://www.codechef.com/AUG20B/problems/LINCHESS
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    int n,k,x,mn=0,mn_ans=-1;
    cin>>n>>k;
    while(n--){
        cin>>x;
        if(k%x==0){
            if(mn_ans==-1){
                mn_ans=x;
                mn=n/x;
            }else{
                if((k/x)<mn){
                    mn=k/x;
                    mn_ans=x;
                }
            }
        }
    }
    cout<<mn_ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}