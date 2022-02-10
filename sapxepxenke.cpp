#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int i = 0;
    int j = 0;
    while(i < n){
        cout << a[n - 1 - j] << " ";
        i++;
        if(i >= n) break;
        cout << a[j] << " ";
        i++;
        j++;
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