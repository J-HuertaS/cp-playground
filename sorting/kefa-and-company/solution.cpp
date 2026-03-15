#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,d;
    cin >> n;
    cin >> d;

    vector<pair<long long,long long>> people;
    people.reserve(100000);

    for(int i = 0; i<n; i++){
        int m;
        int s;
        cin >> m;
        cin >> s;
        people.emplace_back(m,s);
    }

    sort(people.begin(),people.end());

    int left = 0;
    int right = 0;
    long long result = 0;
    long long current = 0;

    while(right<n){
        if(left == right){
            current = people[left].second;
            result = max(result,current);
            right++;
            continue;
        }
        
        if(abs(people[left].first - people[right].first)<d){
            // ampliar ventana
            current += people[right].second;
            result = max(result,current);
            right++;
            continue;
        }

        // reducir ventana
        while(abs(people[left].first - people[right].first)>=d){
            current -= people[left].second;
            left++;
        }
    }

    cout << result << "\n";
}