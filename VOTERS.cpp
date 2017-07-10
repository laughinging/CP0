#include<bits/stdc++.h>
using namespace std;

map<int, int> m;
vector<int> v;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int s = 0;
    for (int i = 0; i < 3; i++) {
        int a;
        cin >> a;
        s += a;
    }

    for (int i = 0; i < s; i++) {
        int a;
        cin >> a;
        m[a] ++;
    }
    
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second >1) 
            v.push_back(it->first);
    }
    cout << v.size() << endl;
    //for (int i = 0; i < int(v.size()); i++)
    //    cout << v[i] << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    return 0;
}
