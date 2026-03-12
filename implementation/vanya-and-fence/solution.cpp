#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,h;
    cin >> n;
    cin >> h;

    int f;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> f;
        if(f>h) sum++;
    }

    cout << n + sum << "\n";
    return 0;
}