/*
Question Link: https://codeforces.com/problemset/problem/58/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string st;
    cin>>st;
    vector<char> hello={'h','e','l','l','o'};
    int j = 0;
    for(int i=0;i<st.size();i++){
        if((int)st[i]==(int)hello[j]){
            j++;
            if(j==5){
                break;
            }
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}