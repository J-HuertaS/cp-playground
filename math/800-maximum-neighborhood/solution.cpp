#include <bits/stdc++.h>
using namespace std;

int max_cost(int n){
    int sum1, sum2;
    sum1 = 4*pow(n,2) - n - 4;
    sum2 = 5*(pow(n,2) - n - 1);
    return max(sum1,sum2);
}

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // test cases
    int t; 
    cin >> t;

    // loop the entries
    while(t--) {
        int n;
        cin >> n;

        // base case
        if(n == 1) {
            cout << 1 << "\n";
            continue;
        }

        if(n == 2) {
            cout << 9 << "\n";
            continue;
        }

        cout << max_cost(n) << "\n";
    }
}