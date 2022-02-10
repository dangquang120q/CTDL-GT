#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.length();
    int i = n - 1;
    while(i > 0 && s[i] == '0') i--;
    if(i != 0) s[i]--;
    else s[i]++;
    for(int j = i+1;j<n;j++) s[j]++;
    for(int i = 0;i<n;i++) cout << s[i];
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}