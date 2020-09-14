/*
Question Link: https://www.codechef.com/SEPT20B/problems/CRDGAME2
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

unsigned long long powerOf2(int n){
    if(n==0){
        return 1;
    }
    unsigned long long ans = 2;
    n--;
    while(n>0){
        ans=(ans*2)%mod;
        n--;
    }
    return ans;
}

unsigned long long power(unsigned long long x, int y, int p) 
{ 
	unsigned long long res = 1;
	x = x % p;
	while (y > 0) { 
		if (y & 1) 
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p; 
	} 
	return res; 
}
unsigned long long modInverse(unsigned long long n, int p) 
{ 
	return power(n, p - 2, p); 
}
unsigned long long nCrModPFermat(unsigned long long n, int r, int p) 
{ 
	if (r == 0) 
		return 1; 
	unsigned long long fac[n + 1]; 
	fac[0] = 1; 
	for (int i = 1; i <= n; i++) 
		fac[i] = (fac[i - 1] * i) % p; 

	return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}

void solve(){
    int n;
    cin>>n;
    unsigned long long ans = powerOf2(n),ans2=0;
    int mx=0,cnt=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>mx){
            mx=x;
            cnt=1;
        }else if(x==mx){
            cnt++;
        }
    }
    if(cnt%2==0){
        unsigned long long ans3 = nCrModPFermat(cnt,cnt>>1,mod);
        if(cnt==n){
            ans2 = ans3;
        }else{
            ans2 = (((powerOf2(n-cnt))%mod) * ((ans3)%mod))%mod;
        }
    }
    long long final1 = ans;
    long long final2 = ans2;
    long long final = final1-final2;
    if(final<0){
        final+=mod;
    }
    cout<<final<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
