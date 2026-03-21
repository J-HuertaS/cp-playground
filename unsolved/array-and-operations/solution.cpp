#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k; 

    int total = 0;
    int u = 0;
    int o = 0;
    map<int,int> arr;

    // fill the map
    for(int i=0; i<n; i++){
        int x; 
        cin >> x;
        if(x == 1){
            u++;
        } else {
            arr[x]++;
            o++;
        }
        total += x;
    }

    // frequencies ordered
    priority_queue<pair<int,int>> pq;
    for(auto it : arr) pq.push({it.second, it.first});

    for(int i=0; i<k; i++){ // operations to execute

        if((k-i)*2>o && u>0 && o>0){
            // most frequent
            pair<int, int> top = pq.top();
            pq.pop();

            int valor = top.second;
            int nueva_frecuencia = top.first - 1;

            if(nueva_frecuencia > 0) {
                pq.push({nueva_frecuencia, valor});
            }

            // map update
            auto it = arr.find(valor); 
            if (it != arr.end()) {
                it->second--; // decrement frequence in map
                
                if (it->second <= 0) {
                    arr.erase(it);
                }
            }

            // emparejar con un 1
            u--;
            o--;

            total -= 1 + valor;
            continue;
        }

        if(arr.size() <= 0){
            total--;
            u -= 2;
            continue;
        }

        // there are no more posible ones to match (due to end of 1s or operations left)
        auto it_last = prev(arr.end());
        if(arr.size() >= 2){
            auto it_prev = prev(it_last);
            int val1 = it_last->first;
            int val2 = it_prev->first;
            // substract both values
            total -= val1 + val2;
            it_last->second--;
            it_prev->second--;
            if(it_last->second <= 0) arr.erase(it_last);
            if(it_prev->second <= 0) arr.erase(it_prev); 
        } else {
            int val = it_last->first;
            total -= 2 * val - 1;
            arr[val] -= 2;
            if(it_last->second <= 0) arr.erase(it_last);
        }

    }

    cout << total << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}