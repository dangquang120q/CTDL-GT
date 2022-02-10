#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    for(int i = 1;i<=n;i++) s[i] = '0';
    while(1){
        int count = 0;
        for(int i = 1;i<=n;i++){
            if(s[i] == '1') count++;
        }
        if(count == k){
            for(int i = 1;i<=n;i++){
                cout << s[i];
            }
            cout << endl;
        }
        int i = n;
        while(i > 0 && s[i] != '0') i--;
        if(i == 0) return;
        s[i] = '1';
        for(int j = i+1;j<=n;j++){
            s[j] = '0';
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}