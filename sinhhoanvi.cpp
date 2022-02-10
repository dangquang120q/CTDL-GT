#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[10005];
    for(int i = 1; i <= n; i++) a[i] = i;
    while(1){
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << " ";
        int i = n-1;
        while(i > 0 && a[i] > a[i+1]) i--;
        if(i == 0) return;
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i],a[k]);
        int l = i+1,r = n;
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