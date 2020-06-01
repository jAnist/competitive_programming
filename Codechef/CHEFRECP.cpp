/*
Question Link: https://www.codechef.com/COOK118B/problems/CHEFRECP
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> Anum(1001,0);
    vector<int> Aval(1001,0);
    int x,num=0;
    cin>>x;
    num+=1;
    for(int i=0;i<n-1;i++){
        int y;
        cin>>y;
        if(y==x){
            num+=1;
        }else{
            Anum[num]+=1;
            Aval[x]+=1;
            x=y;
            num=1;
        }
    }
    Anum[num]+=1;
    Aval[x]+=1;
    int flag=1;
    /*for(int i=0;i<1001;i++){
        cout<<Anum[i]<<" ";
    }cout<<endl;
    for(int i=0;i<1001;i++){
        cout<<Aval[i]<<" ";
    }cout<<endl;*/
    for(int i=0;i<1001;i++){
        if(Anum[i]>1 || Aval[i]>1){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}