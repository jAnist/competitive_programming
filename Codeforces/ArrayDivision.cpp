/*
Question Link: https://codeforces.com/problemset/problem/808/D
*/

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

void solve(){
    // Codeforces 808D
    int n,fg=0;
    long long sm=0;
    cin>>n;
    vector<long long> A(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
        sm+=A[i];
    }
    // for(int i:A){
    //     cout<<i<<" ";
    // }cout<<endl;
    map<long long,int> first,second;
    first[A[0]]=1;
    for(int i=1;i<n;i++){
        second[A[i]]++;
    }
    if(sm%2==0){
    long long s1=0;
    for(int i=0;i<n;i++){
        s1+=A[i];
        first[A[i]]++;
        second[A[i]]--;
        // cout<<s1<<" "<<sm/2<<endl;
        if(s1==sm/2){
            cout<<"YES\n";
            fg=1;
            break;
        }else if(s1<sm/2){
            if(second[sm/2 - s1]>=1){
                cout<<"YES\n";
                fg=1;
                break;
            }
        }else{
            if(first[s1-sm/2]>=1){
                cout<<"YES\n";
                fg=1;
                break;
            }
        }
        
    }}
    if(fg==0){
        cout<<"NO\n";
    }
}

int main(){
    solve();
    return 0;
}