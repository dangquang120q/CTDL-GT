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
    int min = a[1] - a[0];
    for(int i = 0;i<n - 1;i++){
        if(a[i + 1] - a[i] < min) min = a[i + 1] - a[i];
    }
    cout << min << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}