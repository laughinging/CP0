// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=333

// This website takes input-output from file instead 
// of standard input output like most competitive 
// programming websites. Hence, here's a skeleton code 
// (C++ only) to get you started
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    freopen("addin.txt", "r", stdin);
    freopen("addout.txt", "w", stdout);
    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int a, b;

    cin >> a;
    cin >> b;

    cout << a+b << endl;

    return 0;
}