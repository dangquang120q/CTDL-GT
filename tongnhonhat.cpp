#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int mod = 1e9 + 7;
void solve(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    char b[105] = {},c[105] = {};
    int x = 0,y = 0;
    for(int i = 0;i<n;i++){
        if(i % 2 == 0) b[x++] = char(a[i] + '0');
        else c[y++] =  char(a[i] + '0');
    }
    long long d = atoll(b);
    long long e = atoll(c);
    cout << d + e << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}