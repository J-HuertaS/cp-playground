#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>


int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;

    int r = 0;
    string s;
    while(n--){
        cin >> s;
        if(s.find('+') != string::npos){
            r++;
        } else {
            r--;
        }
    }
    cout << r << "\n";
    return 0;
}