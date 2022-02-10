#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int b[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    int x = 0;
    for(int i = 0;i<n;i++){
        if(b[i] != a[i] && b[i] != a[n - i - 1] || b[i] != a[i] && b[i] != a[n-i-1]) x = 1;
    }
    if(x == 0) cout << "Yes";
    else cout << "No";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}