#include<bits/stdc++.h>
using namespace std;
int N;
string a[100009];
string DaoNguoc(string s){
    int length = s.length();
    string temp;
    for (int i = length-1; i >=0; i--) {
        temp.push_back(s[i]);
    }
    return temp;
}
int main(){
    cin >> N;
    int n = 2;
    a[0] = "0";
    a[1] = "1";
    int k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        k++;
    }
    for (int i = k; i < n; i++)
    {
        if(a[i] == DaoNguoc(a[i])){
            for(int j = 0;j < a[i].length();j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}