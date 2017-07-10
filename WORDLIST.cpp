#include<bits/stdc++.h>
using namespace std;

set<string> ss;
char s[100];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    
    int n;
    cin >> n;
    gets(s); // flush to next line
    while (n--) {
        gets(s);
        int l = strlen(s);
        for (int i = 0; i < l; i++) {
            s[i] = tolower(s[i]);
            if (!isalpha(s[i]))
                s[i] = ' ';
        }
        stringstream k(s);
        string w;
        while (k >> w)
            ss.insert(w);
    }
    cout << ss.size() << endl;
    for (set<string>::iterator it = ss.begin(); it != ss.end(); it++)
        cout << *it << endl;
    
    return 0;
}
