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
    int check = 0;
    if(n == 1) cout << "-1";
    else{
        int k = a[0];
        for(int i = 0;i<n;i++){
            if(a[i] != k){
                check = 1;
                k = a[i];
                break;
            }
        }
        if(check == 0) cout << "-1";
        else cout << a[0] << " " << k;
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