#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int min = abs(0 - (a[0] + a[1]));
    for(int i = 0;i<n - 1;i++){
        for(int j = i + 1;j<n;j++){
            if(abs(0 - a[i] - a[j]) < abs(min)) min = (a[i] + a[j]);
        }
    }
    cout << min << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}