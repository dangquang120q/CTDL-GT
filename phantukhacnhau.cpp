#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long a[n+5] = {};
    long long b[n+5] = {};
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n-1;i++) cin >> b[i];
    int i = 0,j = 0;
    int x = 0;
    while(i < n - 1 && j < n - 1){
        if(a[i] == b[j]){
            i++;
            j++;
        }
        else{
            x = 1;
            cout << i + 1;
            break;
        }
    }
    if(x == 0) cout << n - 1;
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}