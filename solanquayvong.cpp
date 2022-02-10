#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 1;i<=n;i++) cin >> a[i];
    int k = n + 1 - a[1];
    if(n == k) cout << "0";
    else cout << k;
    cout << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}