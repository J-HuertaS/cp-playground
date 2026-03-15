#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<long long> normal(n);
    vector<long long> ordered(n);


    long long x;
    cin >> x;
    normal[0] = x;
    ordered[0] = x;
    for(int i=1; i<n; i++){
        cin >> x;
        normal[i] = x + normal[i-1];
        ordered[i] = x;
    }

    sort(ordered.begin(),ordered.end());

    for(int i=1; i<n; i++){
        ordered[i] += ordered[i-1];
    }


    int m;
    cin >> m;
    while(m--){
        int t,l,r;
        cin >> t;
        cin >> l;
        cin >> r;
        if(t == 1){
            long long left = (l-2 < 0)?0:normal[l-2];   
            cout << normal[r-1] - left << endl;
        } else {
            long long left = (l-2 < 0)?0:ordered[l-2];  
            cout << ordered[r-1] - left << endl;
        }
    }
}