/*
Question Link: https://www.codechef.com/AUG20B/problems/SKMP
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vec vector<int>

void solve(){
    string s,p;
    cin>>s>>p;
    char c1 = p[0],c2='A';
    map<char,int> M;
    for(char x:s){
        M[x]++;
    }
    for(char x:p){
        if(c2=='A' && x!=c1){
            c2 = x;
        }
        M[x]--;
    }
    int fg=0;
    if(c2=='A'){
        for(auto it:M){
            if(fg==0){
                if(c1<=it.first){
                    cout<<p;
                    fg=1;
                }
            }
            if(it.second>0){
                while(it.second>0){
                    cout<<it.first;
                    it.second--;
                }
            }
        }
    }else{
        if(c1>c2){
            for(auto it:M){
            if(fg==0){
                if(c1<=it.first){
                    cout<<p;
                    fg=1;
                }
            }
            if(it.second>0){
                while(it.second>0){
                    cout<<it.first;
                    it.second--;
                }
            }
        }
        }else{
            for(auto it:M){
            if(fg==0){
                if(c1<it.first){
                    cout<<p;
                    fg=1;
                }
            }
            if(it.second>0){
                while(it.second>0){
                    cout<<it.first;
                    it.second--;
                }
            }
        }
        }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}