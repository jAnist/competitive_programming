/*
Question Link: https://codeforces.com/problemset/problem/236/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,cnt=0;
    string st;
    cin>>st;
    vector<int> arr(26,0);
    for(int i=0;i<st.size();i++){
        m = ((int)st[i])-97;
        arr[m]=arr[m]+1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            cnt = cnt+1;
        }
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}