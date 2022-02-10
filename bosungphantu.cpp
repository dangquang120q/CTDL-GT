#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n + 5] = {};
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    set<int>s;
	for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int k = s.size();
    cout<<(*max_element(a,a+n)-*min_element(a,a+n)+1-s.size())<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}