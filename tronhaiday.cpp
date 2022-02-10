#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m,n;
    cin >> n >> m;
    int a[n + m + 5];
    for(int i = 0;i<n+m;i++) cin >> a[i];
    sort(a,a+m+n);
    for(int i = 0;i<n+m;i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}