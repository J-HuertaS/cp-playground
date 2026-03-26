#include <bits/stdc++.h>
using namespace std;

long long combination(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;

    long long res = 1;
    for (int i = 1; i <= r; ++i) {
        res *= (n - i + 1); // Multiplicamos arriba
        res /= i;           // Dividimos abajo inmediatamente
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> num(n);
    cin >> num[0];
    for(int i=1;i<n;i++){
        cin >> num[i];
        num[i] += num[i-1];
    }

    // base case
    if(num[n-1]%3 != 0){
        cout << 0 << endl;
        return 0;
    }

    long long first = 0, solution = 0; 
    long long target = num[n-1]/3;
    if(target != 0){
        for(long long e:num){
            if(e == target) first++;
            if(e == 2*target) solution += first;
        }

        cout << solution << endl;
        return 0;
    }
    
    // target = 0
    for(long long e:num){
        if(e == target) solution++;
    }

    long long m = solution -1;
    long long r = 2;

    cout << combination(m,r) << endl;

    return 0;
}