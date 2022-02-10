#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    long long tongphai = 0;
    for(int i = 1; i <= n;i++){
        cin >> a[i];
        tongphai+=a[i];
    }
    int i = 2;
    int x = -1;
    long long tongtrai = a[1];
    tongphai = tongphai - a[1];
    while(i < n){
        if(tongphai - a[i] == tongtrai){
            x = i;
            break;
        }
        else{
            tongphai = tongphai - a[i];
            tongtrai+= a[i];
            i++;
        }
    }
    cout << x << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}