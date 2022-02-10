#include<bits/stdc++.h>
using namespace std;
void solve(){
    int v,n;
    cin >> n >> v;
    int k[n+1][v+1];
    int a[n+5];
    int b[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n;i++) cin >> b[i];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j <= v;j++){
            if(i == 0 || j == 0) k[i][j] = 0;
            else if(j < a[i]) k[i][j] = k[i-1][j];
            else{
                k[i][j] = max(k[i-1][j], b[i] + k[i-1][j - a[i]]);
            }
        }
    }
    cout << k[n][v] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}