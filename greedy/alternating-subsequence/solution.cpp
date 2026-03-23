#include <bits/stdc++.h>
using namespace std;


long long solve(vector<int> num){
    long long result = 0;
    int current_pos = 0;
    int current_neg = -INT_MAX;
    bool positive = num[0]>0?true:false;

    for(int x:num){
        if(x>0 && positive){
            current_pos = max(current_pos,x);
            continue;
        } 
        if(x<0 && positive){
            current_neg = max(current_neg,x);
            result += (long long) current_pos;
            current_pos = 0;
            positive = false;
            continue;
        }
        if(x<0 && !positive){
            current_neg = max(current_neg,x);
            continue;
        }
        if(x>0 && !positive){
            current_pos = max(current_pos,x);
            result += (long long) current_neg;
            current_neg = -INT_MAX;
            positive = true;
            continue;
        }
    }
    if(positive){
        result += (long long) current_pos;
    } else {
        result += (long long) current_neg;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> num(n);
        for(int i=0; i<n; i++){
            cin >> num[i];
        }
        cout << solve(num) << endl;
    }
}