// https://www.codechef.com/ZCOPRAC/problems/ZCO14001

#include <iostream>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;

    int a[N];
    
    for (int i=0; i < N; i++) {
        cin >> a[i];
    }

    int hook_ind = 0;
    bool is_load = false;

    int action_num;

    while (cin>>action_num) {
        if (action_num==0) {
            break;
        } else if (action_num==1) {
            if (hook_ind) hook_ind--;
        } else if (action_num==2) {
            if (hook_ind+1<N) hook_ind++;
        } else if (action_num==3) {
            if (a[hook_ind] && !is_load) {a[hook_ind]--; is_load = true;}
        } else if (action_num==4) {
            if (a[hook_ind]<H && is_load) {a[hook_ind]++; is_load = false;}
        }
    }

    for (int i=0; i < N; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;

}