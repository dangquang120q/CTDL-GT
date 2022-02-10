#include<bits/stdc++.h>
using namespace std;
void solve(){
    int mua,ngay,can;
    cin >> mua >> ngay >> can;
    int count = 0;
    if(can*7 > 6*mua) cout << "-1" << endl;
    else{
        int luongthuc = 0;
        while(ngay > 0){
            if(luongthuc < can){
                luongthuc += mua;
                count++;
            }
            luongthuc = luongthuc - can;
            ngay--;
        }
            cout << count << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}