#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n%2 == 0 && n>2){
        cout << "YES" << "\n";
        return 0;
    } 

    cout << "NO" << "\n";
    return 0;
}