#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n+5];
    int check = -1;
    int j = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] == x) {
            check = 1;
            j = i;
        }
    }
    if(check == -1) cout << "-1";
    else cout << j + 1;
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}