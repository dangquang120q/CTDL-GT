#include <bits/stdc++.h> 
using namespace std; 
int main (){ 
    int t; 
    cin>>t; 
    while(t--){ 
        long long n,k; 
        cin>>n>>k; 
        long long l=1; 
        while( k % 2 == 0) { 
            k/=2; 
            l++;
        } 
        cout << l << endl; 
    } 
    return 0; 
}