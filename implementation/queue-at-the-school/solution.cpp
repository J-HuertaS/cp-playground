#include <bits/stdc++.h>
using namespace std;

void shift(string& s){
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == 'B' && s[i+1] == 'G'){
            swap(s[i], s[i+1]);
            i++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--){
        shift(s);
    }

    cout << s << "\n";
}