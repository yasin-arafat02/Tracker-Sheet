#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int yourPosition, liftPosition;
        cin >> yourPosition >> liftPosition;
        int time = abs(liftPosition - yourPosition) * 4 + 3 + 5 + yourPosition * 4 + 3 + 5;
        cout << "Case " << t << ": " << time << endl;
    }
}
