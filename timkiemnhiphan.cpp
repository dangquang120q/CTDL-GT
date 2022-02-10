#include<bits/stdc++.h>
using namespace std;
long long binarysearch(int a[],int l,int r, int x){
    if(r >= l){
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] > x) return binarysearch(a, l, mid - 1,x);
        else return binarysearch(a,mid + 1,r,x);
    }
    
    return -1;
}
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0;i<n;i++) cin >> a[i];
    if(binarysearch(a,0,n - 1,k) == -1) cout << "NO";
    else cout << binarysearch(a,0,n-1,k) + 1;
    cout << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}