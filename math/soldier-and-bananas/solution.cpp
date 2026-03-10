#include <bits/stdc++.h>
using namespace std;

int main() {    
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n,w;
    cin >> k;
    cin >> n;
    cin >> w;

    int total = k*w*(w+1)/2;
    cout << max(total - n,0) << "\n";
    return 0;   
}