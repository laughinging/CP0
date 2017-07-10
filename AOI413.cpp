#include<bits/stdc++.h>
using namespace std;

map<int, int> m;
int main() {
    freopen("dictin.txt", "r", stdin);
    freopen("dictout.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        int x, y;
        cin >> x >> y;
        m.insert(pair<int, int> (x, y));
    }

    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        if (m.find(x) != m.end())
            cout << m[x] << endl;
        else
            cout << "C?" << endl;
    }
    return 0;
}
