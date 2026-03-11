#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x;
    int sol[n];
    for(int i = 0; i<n; i++){
        cin >> x;
        sol[x-1] = i+1;
    }

    for (int i = 0; i < n; i++) {
        cout << sol[i] << " ";
    }
    cout << endl;
}