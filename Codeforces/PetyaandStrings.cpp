/*
Question Link: https://codeforces.com/problemset/problem/112/A
*/

#include <iostream>
#include <vector>
using namespace std;

int comp(char a,char b){
    if(a>='A' and a<='Z'){
        a = a+32;
    }
    if(b>='A' and b<='Z'){
        b = b+32;
    }
    if(a>b){
        return 1;
    }else if(b>a){
        return -1;
    }else{
        return 0;
    }
}

int main()
{
    int x;
    string st1,st2;
    cin>>st1>>st2;
    for(int i=0;i<st1.size();i++){
        x = comp(st1[i],st2[i]);
        if(x!=0){
            break;
        }
    }
    cout<<x<<endl;
}