// http://opc.iarcs.org.in/index.php/problems/VOTERS

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    map<int, int> id_count;
    vector<int> valid_ids;

    int n = n1 + n2 + n3;
    int temp;
    while (n--) {
        cin >> temp;
        id_count[temp] += 1;
    }

    for (map<int, int>::iterator it = id_count.begin(); it != id_count.end(); it++) {
        if (it->second > 1) {
            valid_ids.push_back(it->first);
        }
    }

    cout << valid_ids.size() << endl;

    for (vector<int>::iterator it = valid_ids.begin(); it != valid_ids.end(); it++) {
        cout << *it << endl;
    }
}