#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int x = 0;
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n - 1;i++){
        for(int j = i + 1;j<n;j++){
            if(a[i] == a[j]){
                x = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if(x == 1) break;
    }
    if(x == 0) cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}