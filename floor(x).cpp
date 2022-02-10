#include<bits/stdc++.h>
using namespace std;
long long binarysearch(long long a[],long long l,long long r, long long x){
    if(r >= l){
        long long mid = (l + r) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] > x) return binarysearch(a, l, mid - 1,x);
        else return binarysearch(a,mid + 1,r,x);
    }
    return r;
}
void solve(){
    long long n,x;
    cin >> n >> x;
    long long a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    int k = -1;
    int vitri = binarysearch(a,0,n-1,x);
    if(vitri == -1) cout << -1;
    else cout << vitri + 1;
    cout << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}