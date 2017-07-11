// http://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=416

// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    freopen("listin.txt", "r", stdin);
    freopen("listout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int f;
    cin >> f;

    map<int, int> friends_count;

    int a, b;
    int temp_m = 0;

    while (f--) {
        cin >> a >> b;

        friends_count[a]++;
        friends_count[b]++;

        temp_m = max(temp_m, friends_count[a]);
        temp_m = max(temp_m, friends_count[b]);
    }

    for (map<int, int>::iterator it=friends_count.begin(); it!=friends_count.end(); it++) {
        if (it->second == temp_m) {
            cout << it->first << endl;
        }
    }

    return 0;
}