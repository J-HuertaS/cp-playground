#include <bits/stdc++.h>
using namespace std;
#include <climits>

int recipe[3] = {0,0,0};
int ingredients[3];
int prices[3];
long long money;

bool can_i_make_it(long long n){
    long long needed;
    long long current_money = money;
    for(int i = 0; i<3; i++){
        needed = recipe[i]*n;
        needed = max(0LL, needed-ingredients[i]);
        long long cost = (long long) prices[i]*needed;
        if(current_money < cost) return false;
        current_money -= cost;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string entry;

    cin >> entry;

    for(char c:entry){
        if(c == 'B') recipe[0]++;
        if(c == 'S') recipe[1]++;
        if(c == 'C') recipe[2]++;
    }
    for(int i = 0; i < 3; i++){
        cin >> ingredients[i];
    }

    for(int i = 0; i < 3; i++){
        cin >> prices[i];
    }

    cin >> money;

    long long l = 0, r = 1e13, ans = 0;
    while(l<=r){
        long long mid = (r-l)/2 + l;
        if(can_i_make_it(mid)){
            ans = mid;   
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}