#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int a[n+5] = {};
    int b[m+5] = {};
    int c[k+5] = {};
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<m;i++){
        cin >> b[i];
    }
    for(int i = 0;i<k;i++){
        cin >> c[i];
    }
    int x = 0;
    int i = 0,j = 0,h = 0;
    while(i < n && j < m && h < k){
        if(a[i] == b[j] && b[j] == c[h]) {
            x = 1;
            cout << a[i] << " ";
            i++;
            j++;
            h++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < c[h]){
            j++;
        }
        else h++;
    }
    if(x == 0) cout << "NO";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}