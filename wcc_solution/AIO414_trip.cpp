// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=414

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    freopen("tripin.txt", "r", stdin);
    freopen("tripout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n;
    cin >> n;

    int num;
    vector<int> trips;

    for (int i=1; i<=n; i++) {
        cin >> num;
        if (num%3 == 0) {
            trips.push_back(i);
        }
    }
    
    if (trips.empty()) {
        cout << "Nothing here!" << endl;
    } else {
        cout << trips.size() << endl;
        cout << trips[0];
        for (vector<int>::iterator it = trips.begin() + 1; it != trips.end(); it++) {
            cout << " " << *it;
        }
        cout << endl;
    }

    return 0;
}