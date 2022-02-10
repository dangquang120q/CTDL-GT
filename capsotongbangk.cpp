#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int count = 0;
    for(int i = 0;i<n - 1;i++){
        for(int j = i+1;j<n;j++){
            if(a[i] + a[j] == k) count++;
        }
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}