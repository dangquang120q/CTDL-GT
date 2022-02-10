#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int b[n+5][n+5];
    int x = 0;
    for(int i = 0;i<n;i++){
        bool ok = false;
        for(int j = 0;j <n - i;j++){
            if(a[j] > a[j + 1]){
                swap(a[j],a[j + 1]);
                ok = true;
            }
        }
        if(!ok) continue;
        for(int k = 0;k<n;k++) b[x][k] = a[k];
        x++;
    }
    for(int i = x - 1;i>=0;i--){
        cout << "Buoc " << i + 1 << ": ";
        for(int k = 0;k<n;k++) cout << b[i][k] << " ";
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}