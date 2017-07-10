// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=413

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
 
int main() {
    freopen("dictin.txt", "r", stdin);
    freopen("dictout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int d, w;
    cin >> d >> w;
    
    map<int, int> dict;

    for (int i=0; i<d; i++) {
        int k, v;
        cin >> k >> v;
        dict[k] = v;
    }

    for (int i=0; i<w; i++) {
        int ind;
        cin >> ind;
        map<int, int>::iterator x;
        x = dict.find(ind);
        if (x !=dict.end()) {
            cout << x->second << endl;
        } else {
            cout << "C?" << endl;
        }
    }

    return 0;
}