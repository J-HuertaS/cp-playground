#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int counter[] = {0,0,0,0};

    int x;
    while(n--){
        cin >> x;
        counter[x-1]++;
    }

    int result = counter[3];
    
    if(counter[0] > counter[2]){
        counter[0] -= counter[2];
    } else {
        counter[0] = 0;
    }

    result += counter[2];

    result += (counter[1]*2 + counter[0])/4;
    if((counter[1]*2 + counter[0])%4!=0) result++;

    cout << result << "\n";
}