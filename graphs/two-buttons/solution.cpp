#include <bits/stdc++.h>
using namespace std;

set<int> repetition;
queue<pair<int,int>> q;

int search(int n, int m){
    q.push({n, 0});
    while(!q.empty()){
        pair<int, int> current = q.front();
        q.pop();
        int number = current.first;
        int level = current.second;

        if(number > 10001 || number < 1 || repetition.count(number)){
            continue;
        }

        if(number == m) return current.second;

        repetition.insert(number);

        q.push({number-1,level+1});
        q.push({number*2,level+1});
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    cout << search(n,m) << endl;
}