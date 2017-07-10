#include<bits/stdc++.h>
using namespace std;

int area(int a, int b, int c, int d) {
    return (c-a) * (d-b);
}

int main() {
    freopen("bendin.txt", "r", stdin);
    freopen("bendout.txt", "w", stdout);
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int left = max(x1, x3);
    int right = min(x2, x4);
    int top = min(y2, y4);
    int bottom = max(y1, y3);
    int a = area(x1, y1, x2, y2) + area(x3, y3, x4, y4);
    if (left < right && bottom < top) {
        a -= area(left, bottom, right, top);
    }
    cout << a << endl;
    return 0;
}
