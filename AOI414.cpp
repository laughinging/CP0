#include<bits/stdc++.h>
using namespace std;

int a[50010];
vector<int> v;
int main() {
    freopen("tripin.txt", "r", stdin);
    freopen("tripout.txt", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if (a[i] % 3 == 0) {
            v.push_back(i);
        }
    }
    if (v.empty()) {
       cout << "Nothing here!" << endl; 
    } else {
        cout << v.size() << endl;
        cout << v[0];
        for (auto it = v.begin() + 1; it != v.end(); it++) {
            cout << " " << *it;
        }
    }
    return 0;
}
