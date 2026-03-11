#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int acc = 0;
    int aux;
    for(int i=0; i<n; i++){
        cin >> aux;
        acc += aux;
    }

    double result = (acc+0.0)/n;
    cout << result << "\n";
}