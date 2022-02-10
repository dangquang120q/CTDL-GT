#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int b[n+5][n+5];
    for(int i = 0;i<n - 1;i++){
        int min = a[i];
        int vitri = i;
        for(int j = i + 1;j < n;j++){
            if(a[j] < min){
                min = a[j];
                vitri = j; 
            }
        }
        swap(a[i],a[vitri]);
        for(int k = 0;k<n;k++) b[i][k] = a[k];
    }
    for(int i = n - 2;i>=0;i--){
        cout << "Buoc " << i + 1 << ": ";
        for(int k = 0;k<n;k++) cout << b[i][k] << " ";
        cout << endl;
    }
}
int main(){
    solve();
}