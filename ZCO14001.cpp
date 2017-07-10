#include<bits/stdc++.h>
using namespace std;

int a[100010];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    
    int n, h;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c;
    cin >> c;
    int pos = 0;
    bool load = false;
    while (c) {
        if (c == 1 && pos != 0)
            pos --;
        if (c == 2 && pos != n-1)
            pos ++;
        if (c == 3 && !load && a[pos]) {
            a[pos] --;
            load = true;
        }
        if (c == 4 && load && a[pos] < h) {
            a[pos] ++;
            load = false;
        }
        cin >> c;
    }
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return 0;
}
