#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[10005];
    for(int i = 1;i<=k;i++) a[i] = i;
    while(1){
        for(int i = 1;i<=k;i++) cout << char(a[i] - 1 + 'A');
        cout << endl;
        int i = k;
        while(i > 0 && a[i] >= n-k+i) i--;
        if(i == 0) return;
        a[i]++;
        for(int j = i+1;j<=n;j++){
            a[j] = a[i] + j - i;
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