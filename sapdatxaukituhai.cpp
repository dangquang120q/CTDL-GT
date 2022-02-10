#include<bits/stdc++.h>
using namespace std;
void solve(){
    int d;
    cin >> d;
    string s;
    cin >> s;
    int len = s.length();
    int x = 1;
    for(int i = 0;i<len;i++){
        int solan = 0;
        for(int j = 0;j<len;j++){
            if(s[i] == s[j]) solan++;
        }
        if(solan * d - 1 > len) x = -1;
    }
    cout << x << endl ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}