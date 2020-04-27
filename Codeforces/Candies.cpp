/*
Question Link: https://codeforces.com/contest/1343/problem/A
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    vector<int> arr;
    for(int i=2;i<=32;i++){
        arr.push_back(((int)pow(2,i))-1);
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<=30;i++){
            if(n%arr[i]==0){
                cout<<n/arr[i]<<endl;
                break;
            }
        }
    }
}
