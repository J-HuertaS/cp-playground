#include <bits/stdc++.h>
using namespace std;
#include <climits>

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n == 1){
        cout << "0" << "\n";
        return 0;
    }

    int removals = 0;

    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] == s[i+1]) removals++;
    }
    
    cout << removals << "\n";
    return 0;
}