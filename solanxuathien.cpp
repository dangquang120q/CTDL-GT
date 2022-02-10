#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int count = 0;
    for(int i = 0;i<n;i++){
        if(a[i] == x) count++;
    }
    if(count == 0) cout << "-1";
    else cout << count;
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}