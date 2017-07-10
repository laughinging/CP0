#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = 0;
    int w = 0;
    int l = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        l += a - b;
        if (abs(l) > mx) {
            mx = abs(l);
            w = l > 0 ? 1 : 2;
        }
    }
    cout << w << ' ' << mx << endl;
    return 0;
}
