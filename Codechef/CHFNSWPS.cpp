/*
Question Link: https://www.codechef.com/JULY20B/problems/CHFNSWPS
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll int n,x;
    cin>>n;
    vector<ll int> A(n,0),B(n,0),C,D;
    for(ll int i=0;i<n;i++){
        cin>>x;
        A[i]=x;
    }
    for(ll int i=0;i<n;i++){
        cin>>x;
        B[i]=x;
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    ll int i=0,j=0;
    while(i<n && j<n){
        if(A[i]==B[j]){
            i++;
            j++;
        }else{
            if(A[i]>B[j]){
                if(j==n-1){
                    D.push_back(B[j]);
                    for(ll int k=i;k<n;k++){
                        C.push_back(A[k]);
                    }
                    i=n;
                    j=n;
                    break;
                }else{
                    D.push_back(B[j]);
                    j++;
                }
            }else{
                if(i==n-1){
                    C.push_back(A[i]);
                    for(ll int k=j;k<n;k++){
                        D.push_back(B[k]);
                    }
                    i=n;
                    j=n;
                    break;
                }else{
                    C.push_back(A[i]);
                    i++;
                }
            }
        }
    }
    
    if(i==n){
        if(j<=n-1){
            for(ll int k=j;k<n;k++){
                D.push_back(B[k]);
            }
        }
    }else if(j==n){
        if(i<=n-1){
            for(ll int k=i;k<n;k++){
                C.push_back(A[k]);
            }
        }
    }
    
    /*for(int i=0;i<C.size();i++){
        cout<<C[i]<<" "<<D[i]<<endl;
    }cout<<endl;*/
    if(C.size()==0){
        cout<<0<<endl;
    }else if(C.size()%2==1){
        cout<<-1<<endl;
    }else{
        ll int fg=0;
        ll int c=C[0],c1=1,d=D[0],d1=1;
        for(ll int i=1;i<C.size();i++){
            if(C[i]==c){
                c1++;
            }else{
                if(c1%2==1){
                    fg=1;
                    break;
                }
                c1=1;
            }
            c = C[i];
            
            if(D[i]==d){
                d1++;
            }else{
                if(d1%2==1){
                    fg=1;
                    break;
                }
                d1=1;
            }
            d = D[i];
        }
        if(fg==1){
            cout<<-1<<endl;
        }else{
            ll int ans=0,mn;
            if(A[0]<B[0]){
                mn=A[0];
            }else{
                mn=B[0];
            }
            for(ll int i=0;i<C.size();i++){
                if(C[i]<D[C.size()-i-1]){
                    if(2*mn<C[i]){
                        ans+=(2*mn);
                    }else{
                        ans+=C[i];
                    }
                }else{
                    if(2*mn<D[C.size()-i-1]){
                        ans+=(2*mn);
                    }else{
                        ans+=D[C.size()-i-1];
                    }
                }
                i++;
            }
            //cout<<"HI"<<" ";
            cout<<ans<<endl;
        }
    }
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       //cout<<"***********t "<<t<<endl;
       solve();
   }
}