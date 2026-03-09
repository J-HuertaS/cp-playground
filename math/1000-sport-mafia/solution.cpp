#include <bits/stdc++.h>
using namespace std;

long long sum_n(long long n){
    return n*(n+1)/2;
}

int eaten_candies(int n, int k){
    int l = 1;
    int r = n;
    int m;
    while(l < r){
        m = (l+r)/2;
        if(sum_n(m) - n + m < k){
            l = m + 1;
        } else {
            r = m;
        }
    }
    
    return n-r;
}

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    cin >> k;

    // base case
    if(n == 1){
        cout << "0" << "\n";
        return 0;
    }

    cout << eaten_candies(n,k) << "\n";
    return 0;
}