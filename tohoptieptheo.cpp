#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[k+5];
    int b[k+5];
    for(int i = 1;i <= k;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    int i = k;
    int count = 0;
	while(i>0 && a[i] == n-k+i) i--;
	a[i]++;
	if(i>0){
		for ( int j = i+1; j<=k; j++){
			a[j] = a[i]+j-i;
		}
		for ( int j = 1; j<=k; j++){
            int h = 0;
            for(int g = 1;g<=k;g++){
                if(a[j] == b[g]){
                    h = 1;
                    break;
                }
            }
            if(h == 0) count++;
        } 
        cout << count;

	}
    else{
		cout << k;
	}
	cout << endl;
}
int main(){
  int t;
  cin >> t;
  while(t--) solve();
}