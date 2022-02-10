#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long max = 0;
    for(int i = 0;i<n;i++){
        max = (max + (a[i] * i)) % mod;
    }
    cout << max << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}