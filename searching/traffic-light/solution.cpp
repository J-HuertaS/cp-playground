#include <bits/stdc++.h>
using namespace std;

int time_to_wait(char cc, string s){
    s = s + s;
    int res = 0;
    int dis = 0;
    bool flag = false;
    for(char c : s) {
        if(c == cc && !flag) {
            dis = 0;
            flag = true;
            continue;
        }
        if(c == 'g' && flag) {
            res = max(res, dis + 1);
            flag = false;
            continue;
        }
        dis++;
    }
    return res;
}

int main(){

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

        char cc;
        cin >> cc;

        string s;
        cin >> s;

        // base case
        if(cc == 'g') {
            cout << 0 << "\n";
            continue;
        }

        cout << time_to_wait(cc,s) << "\n";
    }

    return 0;
}