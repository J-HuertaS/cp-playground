#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int p,q;
    int c = 0;
    for(int i = 0; i < t; i++){
        cin >> p;
        cin >> q;
        if(q-p>=2) c++;
    }

    cout << c << "\n";
}