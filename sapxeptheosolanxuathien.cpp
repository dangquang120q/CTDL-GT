#include<bits/stdc++.h>
using namespace std;
int dd[100005] = {};
bool cmp(int a,int b){
    if(dd[a] > dd[b]) return true;
    else if(dd[a] == dd[b]){
        if(a < b) return true;
        else return false;
    }
    else return false;
}
void solve(){
    int n;
    cin >> n;
    int a[n+5] = {};
    for(int i = 0;i<100000;i++) dd[i] = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        dd[a[i]]++;
    }
    sort(a,a+n,cmp);
    for(int i = 0;i< n;i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}