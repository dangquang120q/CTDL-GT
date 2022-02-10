#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long mu(long long a, long long b){
    if(b == 0) return 1;
    long long x = mu(a,b/2);
    if(b % 2 == 1) return(x % mod * ((x * a) % mod)) % mod;
    return(x % mod * (x % mod)) % mod;
}
void solve(){
    int n, k;
    cin >> n >> k;
    cout << mu(n,k) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}