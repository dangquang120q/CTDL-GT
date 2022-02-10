#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long arr[n+5];
    for(int i = 0; i< n ;i++) cin >>arr[i];
    sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        arr[i] = (arr[i] * arr[i]);
    }
    long long a,b,c;
    int x = 0;
    for(int i = 0;i<n;i++){
        int left = n - 2;
        int right = n - 1;
        a = arr[i];
        while(left > i){
            b = arr[left];
            c = arr[right];
            long long cal = c - b;
            if(cal == a){
                x = 1;
                cout << "YES";
                break;
            }
            else if(cal > a) right--;
            else left--;
        }
        if(x == 1) break;
    }
    if(x == 0) cout << "NO";
    cout << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}