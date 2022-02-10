#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long tich1 = a[0] * a[1];
    long long tich2 = a[n-1] * a[n - 2];
    long long tich3 = a[0] * a[1] * a[n - 1];
    long long tich4 = a[n-1] * a[n - 2] * a[n - 3];
    cout << max(tich1,max(tich2,max(tich3,tich4))) << endl;
}
int main(){
    solve();
}