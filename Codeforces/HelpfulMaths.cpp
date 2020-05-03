/*
Question Link: https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str,res;
    int x;
    vector<int> arr;
    cin>>str;
    for(int i=0;i<str.size();i++){
        x = (int)str[i]-48;
        arr.push_back(x);
        i++;
    }
    sort(arr.begin(),arr.end());
    res = to_string(arr[0]);
    for(int i=1;i<arr.size();i++){
        res = res+"+"+to_string(arr[i]);
    }
    cout<<res<<endl;
}