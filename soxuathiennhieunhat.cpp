#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int can = n/2;
    int a[n+5];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int count = 1;
    int max = 1;
    for(int i = 0;i<n - 1;i++){
        if(count > max) max = count;
        if(a[i] == a[i+1]) count++;
        else{
            count = 1;
        }
    }
    if(max + 1 > can) cout << a[can];
    else cout << "NO";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}