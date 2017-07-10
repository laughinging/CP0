#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("mixin.txt", "r", stdin);
    freopen("mixout.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout << a/b;
    if (a % b) {
        cout << ' ' << a%b << '/' << b;
    }
    cout << endl;
    return 0;
}
