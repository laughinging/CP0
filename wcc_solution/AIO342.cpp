//http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=342

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int a, b;
    int s;
    int seats;

    cin >> a >> b;
    seats = a*b;

    cin >> s;

    int sit, stand;

    sit = seats>s ? s : seats;
    stand = seats>s ? 0 : s - seats;

    cout << sit << " " << stand << endl;

    return 0;
}