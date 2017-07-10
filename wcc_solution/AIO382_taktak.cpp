// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple2&problemid=382

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("taktakin.txt", "r", stdin);
    freopen("taktakout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n;
    int i = 0;

    cin >> n;

    while (n%11 != 1) {
        i++;
        n *= 2;
    }

    cout << i << " " << n << endl;

    return 0;
}