#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int count = 0;
    for(int i = 0;i<n - 2;i++){
        if(i != 0 && a[i] == a[i - 1]) continue;
        int j = i + 1,b = n - 1;
        while(j < b){
            long long x = a[i] + a[j] + a[b];
            if(x < k ){
//                cout << a[i] << " " << a[j] << " " << a[b] << endl;
                if(a[j] == a[b]) count++;
                while(j < b && a[j] == a[j+1]) j+=1;
                while(j < b && a[b] == a[b-1]) b-=1;
                count = count + b - j;
                j++;
            }
            else{
                b--;
            }
        }
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