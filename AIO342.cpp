#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);
    cin >> a >> b >> c;
    cout << min(a*b, c) << " " << c - min(a*b, c) << endl;
    return 0;
}
