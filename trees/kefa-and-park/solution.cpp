#include <bits/stdc++.h>
using namespace std;


int check(const vector<vector<int>>& tree, const vector<bool>& nodes, int current_node, int p, int m, int current_m) {
    if(nodes[current_node]) current_m++;
    else current_m = 0;

    if(current_m > m) return 0;

    long long total = 0;
    bool isLeaf = true;

    for(int neighbor:tree[current_node]){
        if(neighbor != p) {
            total += check(tree,nodes,neighbor,current_node,m,current_m);
            isLeaf = false;
        }
    }

    if(isLeaf) return 1;

    return total;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    vector<bool> nodes(n);

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nodes[i] = temp; // Leemos el 0 o 1
    }

    vector<vector<int>> tree(n);

    for(int i=0; i<n-1; i++){
        int x,y;
        cin >> x;
        cin >> y; 
        tree[x-1].push_back(y-1);
        tree[y-1].push_back(x-1);
    }

    cout << check(tree,nodes,0,-1,m,0) << endl;
}