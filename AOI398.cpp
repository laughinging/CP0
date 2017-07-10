#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("rainin.txt", "r", stdin);
    freopen("rainout.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    int s = 0;
    for (int i = 1; i <= a; i++) {
        int c;
        cin >> c;
        s += c;
        if (s >= b) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
