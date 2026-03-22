#include <bits/stdc++.h>
using namespace std;

int main() {
    // optimization
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool flag = false;
    bool result = false;
    int l = 0, r = 0;

    vector<int> num(n);
    for(int i=0; i<n; i++){
        cin >> num[i];
        if(num[i]<=num[i-1]) flag=true;
    }

    if(!flag){
        cout << "yes" << endl;
        cout << "1" << " " << "1" << endl;
        return 0;
    }

    for(int i=0; i<n-1; i++){
        if(num[i]>num[i+1] && flag){
            if(!result){
                flag = !flag;
                l = i;
            } else {
                cout << "no" << endl;
                return 0;
            }
        } 
        if(num[i]<num[i+1] && !flag){
            r=i;
            result = true;
            flag = true;
            if(num[i]<=(l-1>=0)?num[l-1]:0 || num[i+1]<=num[l]){
                cout << "no" << endl;
                return 0;
            }
        } 
        if(num[i] == num[i+1]){
            cout << "no" << endl;
            return 0;
        }
        if(i==n-2 && !flag && !result){
            r=n-1;
            if(num[r]<=(l-1>=0)?num[l-1]:0){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    cout << l+1 << " " << r+1 << endl;
    return 0;
}

