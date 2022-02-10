#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    long long a[n1+5];
    long long b[n2 + 5];
    long long c[n3 + 5];
    for(int i = 0;i<n1;i++) cin >> a[i];
    for(int i = 0;i<n2;i++) cin >> b[i];
    for(int i = 0;i<n3;i++) cin >> c[i];
    long long i = 0,j = 0,k = 0;
    long long d[100006] = {};
    long long x = 0;
	int g = 0;
    while(i < n1 && j < n2 && k < n3){
        if(a[i] == a[i - 1]) i++;
        if(b[j] == b[j - 1]) j++;
        if(c[k] == c[k - 1]) k++;
//        cout << a[i] << " " << b[j] << " " << c[k] << endl;
        if(a[i] == b[j] && a[i] == c[k]){
			g = 1;
            d[x++] = a[i];
            i++;
            j++;
            k++;
        }
        else{
            if(a[i] > c[k]) k++;
            else if(a[i] < c[k]) i++;
            if(a[i] > b[j]) j++;
            else if(a[i] < b[j]) i++;
        }
    }
	if(g == 0) cout << "-1";
    for(int i = 0;i<x;i++) cout << d[i] << " ";
    cout << endl; 
}
int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}