#include <bits/stdc++.h>
using namespace std;
#include <cmath>

const int MAX_LIMIT = 1000000;
vector<bool> prime(MAX_LIMIT + 1, true);

void generatePrimes()
{
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= MAX_LIMIT; p++) {
        
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true) {
            
            // Update all multiples of p
            for (int i = p * 2; i <= MAX_LIMIT; i += p)
                prime[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    generatePrimes();

    int n;
    cin >> n;

    while(n--){
        long long x;
        cin >> x;

        long long r = (long long)sqrt(x);
        if (r * r == x && prime[r]) { 
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}