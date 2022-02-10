#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int len = s.length();
    int a[len + 5];
    for(int i = 1;i<=len;i++){
        a[i] = i;
    }
    while(1){
        for(int i = 1; i <= len; i++) cout << s[a[i] - 1];
        cout << " ";
        int i = len-1;
        while(i > 0 && a[i] > a[i+1]) i--;
        if(i == 0) return;
        int k = len;
        while(a[i] > a[k]) k--;
        swap(a[i],a[k]);
        int l = i+1,r = len;
        while(l < r){
            swap(a[l],a[r]);
            l++;
            r--;
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