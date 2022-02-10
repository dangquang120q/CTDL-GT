#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int max = a[0];
    for(int i = 0;i<n;i++){
        int s = 0;
        for(int j = i;j<n;j++){
            s = s + a[j];
            if(max < s) max = s;
        }
    }
    cout << max << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}