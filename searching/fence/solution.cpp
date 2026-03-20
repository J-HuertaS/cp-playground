#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;

    vector<int> fences(n);

    // read fences input
    for(int i=0; i<n; i++){
        cin >> fences[i];
        if(i>0) fences[i] += fences[i-1];
    }



    // sliding window
    int l = 0;
    int r = k-1; // idx-0

    int lowest = INT_MAX;
    int solution = 0;

    while(r<n){
        int total = (l-1>=0)?fences[r] - fences[l-1]:fences[r] - 0;
        if(total < lowest){
            lowest = total;
            solution = l+1;
        }
        l++;
        r++;
    }


    cout << solution << endl;
}