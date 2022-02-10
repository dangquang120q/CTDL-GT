#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long x = 0,y = 0;
    for(int i = 0;i<k;i++){
        x = x + a[i];
    }
    for(int i = k;i<n;i++){
        y = y + a[i];
    }
    long long tong1 = y - x;
    sort(a,a+n, greater<int>());
    x = 0,y = 0;
    for(int i = 0;i<k;i++){
        x = x + a[i];
    }
    for(int i = k;i<n;i++){
        y = y + a[i];
    }
    long long tong2 = x - y;
    if(tong1 > tong2) cout << tong1;
    else cout << tong2;
    cout << endl;
}  
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}