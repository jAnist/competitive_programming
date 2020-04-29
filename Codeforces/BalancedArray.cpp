/*
Question Link: https://codeforces.com/contest/1343/problem/B
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t,n,m,p;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr;
        m = n/2;
        if(m%2==0){
            p=m/2;
            cout<<"YES"<<endl;
            for(int i=1;i<=m;i++){
                arr.push_back(2*i);
            }
            for(int i=1;i<=m;i++){
                if(i<=p){
                    arr.push_back((2*i)-1);
                }else{
                    arr.push_back((2*i)+1);
                }
            }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}