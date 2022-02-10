#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n - k + 1;i++){
        int max = a[i];
        for(int j = i;j<k+i;j++){
            if(a[j] > max) max = a[j];
        }
        cout << max << " ";
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