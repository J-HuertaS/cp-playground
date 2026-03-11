#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int> maxHeap;
    int total = 0;
    int aux;

    for(int i=0; i<n; i++){
        cin >> aux;
        maxHeap.push(aux);
        total += aux;
    }

    int count = 0;
    int obtained = 0;
    while(obtained <= total){
        aux = maxHeap.top();
        obtained += aux;
        maxHeap.pop();
        total -= aux;
        count++;
    }

    cout << count << "\n";

}