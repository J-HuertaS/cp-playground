#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    if(n.find('4') != string::npos || n.find('7') != string::npos){
        int c = count(n.begin(), n.end(), '4') + count(n.begin(), n.end(), '7');
        string result = to_string(c);
        if(result.find('4') != string::npos || result.find('7') != string::npos){
            cout << "YES" << "\n";
            return 0;
        }
    }

    cout << "NO" << "\n";
}