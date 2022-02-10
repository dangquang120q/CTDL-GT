#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int dd[10] = {};
    for(int i = 0;i<n;i++){
        cin >> a[i];
        while(a[i] > 0){
            int k = a[i] % 10;
            a[i] = a[i]/10;
            if(dd[k] == 0) dd[k]++;
        }
    }
    for(int i = 0;i<10;i++){
        if(dd[i] == 1) cout << i << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}