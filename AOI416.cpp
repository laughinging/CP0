#include<bits/stdc++.h>
using namespace std;

map<int, int> m;
vector<int> v;

int main() {
    freopen("listin.txt", "r", stdin);
    freopen("listout.txt", "w", stdout);
    int n;
    cin >> n;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        m[a] ++;
        m[b] ++;
        mx = max(m[a], mx);
        mx = max(m[b], mx);
    }

    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second == mx) 
            v.push_back(it->first);
    }
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }




    
    
    return 0;
}
