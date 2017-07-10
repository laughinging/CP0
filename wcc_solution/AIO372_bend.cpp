// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=372

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;

int area(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (y2 - y1);
}

int is_in(int a, int b, int m) {
    return (a<=m)&&(m<=b);
}


int main() {
    freopen("bendin.txt", "r", stdin);
    freopen("bendout.txt", "w", stdout);

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
    overlap_s = 0;

    int ox1, ox2, oy1, oy2;
    ox1 = max(x1, x3);
    ox2 = min(x2, x4);
    oy1 = max(y1, y3);
    oy2 = min(y2, y4);
    if ((ox1<ox2) && (oy1<oy2)) {
        overlap_s = area(ox1, oy1, ox2, oy2);
    }

    cout << s - overlap_s << endl;

    return 0;
}