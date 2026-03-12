#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r = 0;
    int c = 0;
    int x;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
                r = i;
                c = j;
                break;
            }
        }
    }

    int result = abs(r-2) + abs(c-2);
    cout << result << "\n";
}