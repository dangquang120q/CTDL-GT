#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int b[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int x = 0;
    for(int i = 0;i<n;i++){
        b[i] = a[i];
        sort(b,b+i+1);
        cout << "Buoc " << i << ": ";
        for(int k = 0;k<=i;k++) cout << b[k] << " ";
        cout << endl;
    }
}
int main(){
    solve();
}