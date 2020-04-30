/*
Question Link: https://codeforces.com/problemset/problem/263/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int res=0,x,y,m;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>m;
            if(m==1){
                x = i;
                y = j;
                break;
                break;
            }
        }
    }
    if(x>3){
        res = res+x-3;
    }else{
        res = res+3-x;
    }
    if(y>3){
        res = res+y-3;
    }else{
        res = res+3-y;
    }
    cout<<res<<endl;
}