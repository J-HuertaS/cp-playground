#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int r = (n%5==0) ? n/5 : n/5 + 1;

    cout << r << "\n";

    return 0;

}