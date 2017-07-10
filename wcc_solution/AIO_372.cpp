// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;

int area(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (y2 - y1)
}

int is_in(int a, int b, int m) {
    return (a<=m)&&(m<=b)
}


int main() {
    freopen("INPUT_FILE_NAME.txt", "r", stdin);
    freopen("OUTPUT_FILE_NAME.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int s;
    s = area(x1, y1, x2, y2) + area(x3, y3, x4, y4);

    int overlap_s;

    int ox1, ox2, oy1, oy2;

    return 0;
}