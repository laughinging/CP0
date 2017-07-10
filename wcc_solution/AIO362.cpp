// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=362

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("mixin.txt", "r", stdin);
    freopen("mixout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n, d;
    cin >> n >> d;

    int a, b;

    a = n / d;
    b = n % d;

    cout << a;
    if (b!=0) {
        cout << " " << b << "/" << d;
    }

    cout << endl;

    return 0;
}