#include<bits/stdc++.h>
using namespace std;
string road;
int x = 0;
void solve(){
    int n;
    cin >> n;
    int a[n + 5][n + 5];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> a[i][j];
        }
    }
    if(a[0][0] == 0 || a[n - 1][n-1] == 0) cout << "-1";
    else{
        int i = 1,j = 1;
        if(i == n || j == n){
            x = 1;
            cout << road;
            cout << " ";
        }
        else{
            
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}