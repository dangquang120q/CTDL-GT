#include<bits/stdc++.h>
using namespace std;
string s[10005];
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int b[n+5];
    int c[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
        b[i] = a[i];
        c[i] = a[i];
    }
    int k = n - 1;
    int g = 1;
    while(k > 0){
        for(int i = 0;i<n;i++){
            a[i] = c[i];
        }
        int i = 0;
        while(i < n - g){
            for(int j = 0;j<n - i;j++){
                b[j] = a[j] + a[j+1];
                a[j] = b[j];
            }
            i++;
        }
        cout << "[";
        for(int j = 0;j < g;j++){
            if(j != n - k - 1)
                cout << b[j] << " ";
            else cout << b[j];
        }
        cout << "] ";
        k--;
        g++;
    }
    cout << "[";
    for(int j = 0;j < n;j++){
        if(j != n-1)
            cout << c[j] << " ";
        else cout << c[j];
    }
    cout << "]";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}