#include <bits/stdc++.h>
using namespace std;

int solve(int x,const vector<int>& arr){
    int l=0,r=arr.size()-1;
    while(l<r){
        int m = (r-l)/2 + l;
        if(arr[m]<x){
            l = m+1;
        } else {
            r = m;
        }
    }
    return l+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> sup_limits(n);
    cin >> sup_limits[0];
    for(int i=1; i<n; i++){
        cin >> sup_limits[i];
        sup_limits[i] += sup_limits[i-1];
    }

    int m;
    cin >> m;
    while(m--){
        int x;
        cin >> x;
        cout << solve(x,sup_limits) << endl;
    }
}