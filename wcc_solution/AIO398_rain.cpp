// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple2&problemid=398

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("rainin.txt", "r", stdin);
    freopen("rainout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n, c;
    cin >> n >> c;

    int s = 0;
    int i = 0;
    int daily_amount;

    do {
        cin >> daily_amount;
        s += daily_amount;
        i++;
    } while (s<c);

    cout << i << endl;

    return 0;
}