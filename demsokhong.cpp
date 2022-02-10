#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int count = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] == 0) count++;
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}