/*
Question Link: https://codeforces.com/contest/1352/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int pwr(int a){
    int x;
    if(a==0){
        x=1;
    }else if(a==1){
        x=10;
    }else if(a==2){
        x=100;
    }else if(a==3){
        x=1000;
    }else if(a==4){
        x=10000;
    }
    return x;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,cnt=0;
       cin>>n;
       vector<int> ar;
       while(n>0){
           int x = n%10;
           if(x!=0){
               cnt++;
           }
           ar.push_back(x);
           n = n/10;
       }
       cout<<cnt<<endl;
       for(int i=0;i<ar.size();i++){
           int y = pwr(i);
           int x = ar[i]*y;
           if(x>0){
               cout<<x<<" ";
           }
       }cout<<endl;
   }
}