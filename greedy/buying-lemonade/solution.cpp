#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    long long n,k; // slots and # lemonades I want
    while(t--){
        cin >> n;
        cin >> k;
        map<long long,long long> layers;
        
        for(long long i=0; i<n; i++){
            long long x;
            cin >> x;
            layers[x]++; // if the key doesn't exists, it is created with the value of zero
        }

        // init
        long long result = 0;
        long long cans = 0;
        long long slots_left = n;
        long long prev_layer = 0;

        // first layer
        auto it = layers.begin();
        
        
        while(it != layers.end()){

            long long height = it->first;
            long long delta = height - prev_layer;

            long long possible = delta * slots_left;

            if(possible >= k - cans){
                cout << k + result << "\n";
                break;
            }

            cans += possible;
            result += it->second;

            slots_left -= it->second;
            prev_layer = height;

            ++it;
        }
    }
}