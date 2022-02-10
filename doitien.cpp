#include<bits/stdc++.h>
using namespace std;
int a[100] = {1,2,5,10,20,50,100,200,500,1000};
void solve(){
    int N;
    cin >> N;
    int n = 9;
    int count = 0;
    while(N > 0)
    {
        while(N >= a[n] && n >= 0){
            N = N - a[n];
            count++;
        }
        n--;
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}