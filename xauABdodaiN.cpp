#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    for(int i = 1;i<=n;i++) s[i] = 'A';
    while(1){
        for(int i = 1;i<=n;i++) cout << s[i];
        cout << " ";
        int i = n;
        while(i > 0 && s[i] != 'A') i--;
        if(i == 0) return;
        s[i] = 'B';
        for(int j = i+1;j<=n;j++){
            s[j] = 'A';
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
}