#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    int l = n;
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n;i++){
        bool ok = false;
        for(int j = 0;j <n - i;j++){
            if(a[j] > a[j + 1]){
                swap(a[j],a[j + 1]);
                ok = true;
            }
        }
        if(!ok) continue;
        cout << "Buoc " << i + 1 << ": ";
        for(int k = 0;k<n;k++) cout << a[k] << " ";
        cout << endl;
    }
}
int main(){
    solve();
}