/*
Question Link: https://codeforces.com/problemset/problem/282/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,x=0;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        if(str[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
}