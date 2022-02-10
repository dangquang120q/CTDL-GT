#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
void solve(){
    int n,k;
    cin >> n >> k;
    int f[10005] = {};
    f[0] = 1,f[1] = 1;
    for(int i = 2;i<=n;i++){
        f[i] = 0;
        for(int j = 1;j <= i && j <= k;j++){
            f[i] = (f[i] + f[i - j]) % mod;
        }
    }
    cout << f[n] << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}