// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=412

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("encyin.txt", "r", stdin);
    freopen("encyout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n, q;
    cin >> n >> q;

    int a[n];

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    for (int i=0; i<q; i++) {
        int ind;
        cin >> ind;
        ind -= 1;
        cout << a[ind] << endl;
    }

    return 0;
}