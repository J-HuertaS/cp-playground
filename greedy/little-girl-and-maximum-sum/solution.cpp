#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;

    vector<long long> num(n);

    for(int i=0; i<n; i++){
        int x;
        cin >> num[i];
    }

    vector<int> ind(n, 0);

    for(int i=0; i<q; i++){
        int x,y;
        cin >> x >> y;
        ind[x-1]++;
        if(y<n) ind[y]--;
    }

    int current = 0;
    for(int i=0; i<n; i++){
        current += ind[i];
        ind[i] = current;
    }

    sort(num.begin(),num.end());
    sort(ind.begin(),ind.end());

    long long result = 0;
    for(int i=0; i<n; i++){
        result += num[i]*ind[i];
    }

    cout << result << endl;
}