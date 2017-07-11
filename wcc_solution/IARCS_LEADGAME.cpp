// http://opc.iarcs.org.in/index.php/problems/LEADGAME

# include <iostream>
# include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b;
    int result_diff = 0;
    int temp_diff = 0;


    while (n--) {
        cin >> a >> b;
        
        temp_diff += (a - b);

        if (abs(temp_diff)>abs(result_diff)) {
            result_diff = temp_diff;
        }
    }

    if (result_diff > 0) {
        cout << "1 " << result_diff << endl;
    } else {
        cout << "2 " << -result_diff << endl;
    }
    return 0;
}