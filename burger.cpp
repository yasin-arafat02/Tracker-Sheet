#include <iostream>
using namespace std;

int max_profit(int b, int p, int f, int h, int c) {
    int profit = 0;
    
    if (h < c) {
        swap(h, c);
        swap(p, f);
    }
    
    int burgers = min(b / 2, p);
    profit += burgers * h;
    b -= burgers * 2;
    
    burgers = min(b / 2, f);
    profit += burgers * c;
    
    return profit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        cout << max_profit(b, p, f, h, c) << endl;
    }
    return 0;
}
