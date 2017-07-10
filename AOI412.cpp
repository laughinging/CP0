#include<bits/stdc++.h>
using namespace std;

int s[10010];

int main() {
    freopen("encyin.txt", "r", stdin);
    freopen("encyout.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
        cin >> s[i];
    for (int i = 0; i < b; i++) {
        int c;
        cin >> c;
        cout << s[c] << endl;
    }
    return 0;
}
