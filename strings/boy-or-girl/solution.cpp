#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> s;
    string username;
    cin >> username;

    for(char c:username){
        s.insert(c);
    }

    if(s.size()%2==0){
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}