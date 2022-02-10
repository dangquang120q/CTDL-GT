#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n+5];
    int b[m+5];
    int dd[100005] = {};
    int max = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] > max) max = a[i];
        dd[a[i]]++;
    }
    for(int i = 0;i<m;i++){
        cin >> b[i];
        if(b[i] > max) max = b[i];
        dd[b[i]]++;
    }
    for(int i = 0;i <= max;i++){
        if(dd[i] >= 1) cout << i << " ";
    }
    cout << endl;
    for(int i = 0;i <= max;i++){
        if(dd[i] == 2) cout << i << " ";
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