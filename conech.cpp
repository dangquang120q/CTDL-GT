#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long b[100] = {};
    b[0] = 1,b[1] = 1,b[2] = 2;
    for(int i = 3;i <= n;i++){
        b[i] = b[i-3] + b[i-2] + b[i-1];
    }
    cout << b[n] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}