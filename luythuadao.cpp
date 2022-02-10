#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long mu(long long a, long long b){
	if(b == 1) return a % mod;
    long long x = mu(a,b/2);
    if(b%2==1) return (x * x % mod)* a % mod;
    return x * x % mod;
}
void solve(){
	long long n;
	cin >> n;
	long long x=0,b=n;
	while(b>0){
		long long a = b%10;
		x = x*10+a;
		b/=10;
	}
	cout << mu(n,x) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}