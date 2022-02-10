#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int c[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int b[n+5][n+5];
    for(int i = 0;i<n;i++){
        c[i] = a[i];
        sort(c,c+i+1);
        for(int k = 0;k<n;k++) b[i][k] = c[k];
    }
    for(int i = n - 1;i>=0;i--){
        cout << "Buoc " << i << ": ";
        for(int k = 0;k<=i;k++) cout << b[i][k] << " ";
        cout << endl;
    }
}
int main(){
    solve();
}