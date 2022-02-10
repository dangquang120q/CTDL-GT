#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int b[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    int i = 0;
    while(i < n){
        cout << "[";
        for(int j = 0;j < n - i;j++){
            if(j != n - i - 1)
                cout << b[j] << " ";
            else cout << b[j];
        }
        cout << "]";
        cout << endl;
        for(int j = 0;j<n - i;j++){
            b[j] = a[j] + a[j+1];
            a[j] = b[j];
        }
        i++;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}