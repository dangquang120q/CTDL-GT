#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[50005] = {0},c[n+5];
    int x = 0,b;
    for(int i = 0;i < n ; i++){
        cin >> b;
        if(a[b] == 0){
            a[b]++;
            c[x++] = b;
        }
    }
    for(int i = 0;i<x;i++){
        cout << c[i] << " ";
    }
}