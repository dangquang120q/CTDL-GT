#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    int N = 1000000;
    bool check[N + 1];
  // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
    for (int i = 2; i <= N; i++) {
        check[i] = true;
    }
    
    // Thuật toán sàng nguyên tố
    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
            }
        }
    }
    if(check[n] == true) return true;
    else return false;
    
}
void solve(){
    int n;
    cin >> n;
    int N = 1000000;
    bool check[N + 1];
    check[0] = false;
    check[1] = false;
    for (int i = 2; i <= N; i++) {
        check[i] = true;
    }
    
    // Thuật toán sàng nguyên tố
    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
            }
        }
    }
    int x = 0;
    for(int i = 0;i<= n/2;i++){
        if(check[i] == true && check[n - i] == true) {
            x = 1;
            cout << i << " " << n - i << endl;
            break;
        }
    }
    if(x == 0) cout << "-1" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}