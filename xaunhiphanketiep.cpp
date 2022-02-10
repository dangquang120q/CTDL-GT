#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        for (int i=n-1;i>=0;i--){
            if (s[i]=='1')
                s[i]='0';
            else{
                s[i]='1';
                break;
            }
        }
        cout << s << endl;
    }
}