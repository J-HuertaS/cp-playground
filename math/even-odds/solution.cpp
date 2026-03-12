#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin >> n;
    cin >> k;
    long long edge = (n%2==0)?n/2:(n/2)+1;
    if(k>edge){
        cout << (k-edge)*2 << "\n";
    } else {
        cout << k*2-1 << "\n";
    }
}