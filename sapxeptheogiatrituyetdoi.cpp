#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(int a,int b){
    if(abs(x - a) < abs(x - b)) return true;
    else return false;
}
void solve(){
    int n;
    cin >> n;
    int a[n+5] = {};
    cin >> x;
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}