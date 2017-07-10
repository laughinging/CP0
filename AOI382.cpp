#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("taktakin.txt", "r", stdin);
    freopen("taktakout.txt", "w", stdout);
    int a;
    cin >> a;
    int d = 0;
    while ((a-1)%11) {
        d++;
        a = a*2;
    }
    cout << d << " " << a << endl;
    return 0;
}
