#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, reference, p;
    int groups = 1;

    cin >> n;
    cin >> reference;

    for(int i = 0; i < n - 1; i++){
        cin >> p;
        if(p != reference) groups++;
        reference = p;    
    }

    cout << groups << "\n";
}