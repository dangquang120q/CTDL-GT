#include<bits/stdc++.h>
using namespace std;
int a[10000005];
void solve(){
    int m,n,k;
    cin >> m >> n >> k;
    for(int i = 0;i<m;i++) cin >> a[i];
    for(int i = m;i<m +n;i++) cin >> a[i];
    sort(a,a+m+n);
    cout << a[k - 1] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}