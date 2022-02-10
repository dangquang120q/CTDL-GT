#include<bits/stdc++.h>
using namespace std;
void solve(){
    char a[105];
    char b[105];
    cin >> a >> b;
    for(int i = 0;i<strlen(a);i++){
        if(a[i] == '6') a[i] = '5';
    }
    for(int i = 0;i<strlen(b);i++){
        if(b[i] == '6') b[i] = '5';
    }
    int c = atoi(a);
    int d = atoi(b);
    cout << c + d << " ";
    for(int i = 0;i<strlen(a);i++){
        if(a[i] == '5') a[i] = '6';
    }
    for(int i = 0;i<strlen(b);i++){
        if(b[i] == '5') b[i] = '6';
    }
    c = atoi(a);
    d = atoi(b);
    cout << c + d << endl;
}
int main(){
    solve();
}