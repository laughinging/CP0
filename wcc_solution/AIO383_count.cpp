// This website takes input-output from file instead
// of standard input output like most competitive
// programming websites. Hence, here's a skeleton code
// (C++ only) to get you started
 
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    freopen("countin.txt", "r", stdin);
    freopen("countout.txt", "w", stdout);

    /* ... your code here ... */
    /* ... cin, cout will work normally. example ... */
    /* ... int a, b; cin >> a >> b; ... */

    int n;
    cin >> n;

    for (int i=1; i<=n ; i++) {
        cout << i << endl;
    }

    return 0;
}