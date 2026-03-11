#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <string>


int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;

    int maximum = 0;
    int minimum = INT_MAX;
    int seconds = 0;

    int soldiers[n];
    for(int i=0; i<n; i++){
        cin >> soldiers[i];
        maximum = max(maximum,soldiers[i]);
        minimum = min(minimum,soldiers[i]);
    }

    for(int i=0; i<n; i++){
        if(soldiers[i] == maximum){
            seconds += i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(soldiers[i] == minimum){
            if(i < seconds) seconds--; 
            seconds += n-1-i;
            break;
        }
    }

    cout << seconds << "\n";
}