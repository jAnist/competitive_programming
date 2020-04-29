/*
Question Link: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d83bf
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main(){
	int t,n;
	long long int ans,m,divi,d;
	cin>>t;
	for(int ix=1;ix<=t;ix++){
		cin>>n>>d;
		vector<long long int> arr(n,0);
		for(int i=0;i<n;i++){
			cin>>m;
			arr[i] = m;
		}
		int i = n-1;
		while(i>=0){
			while(d>0){
			    divi = d%arr[i];
				if(divi==0){
					ans = d;
					i--;
					break;
				}else{
					d = d-divi;
				}
			}
		}
		cout<<"Case #"<<ix<<": "<<ans<<endl;
	}
}